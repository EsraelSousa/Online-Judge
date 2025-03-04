#include <bits/stdc++.h>
using namespace std;

// Ordem das cartas
vector<char> valores = {'4', '5', '6', '7', 'Q', 'J', 'K', 'A', '2', '3'};
vector<char> naipes = {'O', 'E', 'C', 'P'}; // Ordem de força dos naipes

// Função para obter a força de uma carta considerando a manilha
int get_strength(string carta, char manilha) {
    char valor = carta[0], naipe = carta[1];
    int base_strength = find(valores.begin(), valores.end(), valor) - valores.begin();
    
    if (valor == manilha) {
        // Se for manilha, desempata pelo naipe
        int naipe_strength = find(naipes.begin(), naipes.end(), naipe) - naipes.begin();
        return 13 *  naipe_strength; // 100 garante que manilhas sempre sejam mais fortes
    }
    return base_strength;
}

int main() {
    vector<pair<string, char>> anoes(7); // {carta, resposta}
    for (int i = 0; i < 7; i++) {
        cin >> anoes[i].first >> anoes[i].second;
    }
    
    string vira;
    cin >> vira;
    
    // Determinar a manilha
    char manilha;
    int vira_idx = find(valores.begin(), valores.end(), vira[0]) - valores.begin();
    manilha = valores[(vira_idx + 1) % valores.size()];
    
    // Determinar a carta mais forte
    int max_strength = -1;
    vector<int> vencedores;
    for (int i = 0; i < 7; i++) {
        int strength = get_strength(anoes[i].first, manilha);
        if (strength > max_strength) {
            max_strength = strength;
            vencedores = {i};
        } else if (strength == max_strength) {
            vencedores.push_back(i);
        }
    }
    
    // Se houver mais de um vencedor, a rodada está empatada
    bool rodada_tem_vencedor = (vencedores.size() == 1);
    int vencedor = rodada_tem_vencedor ? vencedores[0] : -1;
    
    // Verificar quem errou
    vector<int> perdedores;
    for (int i = 0; i < 7; i++) {
        bool deveria_vencer = (vencedor == i);
        if ((anoes[i].second == 'S' && !deveria_vencer) || (anoes[i].second == 'N' && deveria_vencer)) {
            perdedores.push_back(i);
        }
    }
    
    // Determinar se Dengoso ficou envergonhado
    if (find(perdedores.begin(), perdedores.end(), 0) != perdedores.end()) {
        if (perdedores.size() == 1) {
            cout << "Ficou envergonhado." << endl;
        } else {
            cout << "Nao ficou envergonhado." << endl;
        }
    } else {
        if (perdedores.size() == 6) {
            cout << "Ficou envergonhado." << endl;
        } else {
            cout << "Nao ficou envergonhado." << endl;
        }
    }
    return 0;
}
