#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<vi> vvi;
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define left(x) (2*x)
#define right(x) (2*x + 1)

int main(){
    fast
    string regInput;
    cin >> regInput;
    
    unsigned int regValue = 0;
    
    try {
        // Identificando o formato da entrada
        if (regInput.size() >= 2 && regInput.substr(0, 2) == "0x") {  
            // Hexadecimal
            regValue = stoul(regInput, nullptr, 16);
        } else if (regInput.size() >= 3 && regInput.substr(0, 2) == "0b") {  
            // Binário
            regValue = stoul(regInput.substr(2), nullptr, 2);
        } else {  
            // Decimal
            regValue = stoul(regInput);
        }
    } catch (const exception& e) {
        cerr << "Erro: Entrada inválida do registrador.\n";
        return 1;
    }

    int modeID;
    cin >> modeID;

    bool powerOn = regValue & (1 << 0);  // Bit 0: Power On
    bool error = regValue & (1 << 1);    // Bit 1: Error
    bool ready = regValue & (1 << 2);    // Bit 2: Ready
    bool overheat = regValue & (1 << 3); // Bit 3: Overheat

    // Exibindo a saída conforme o formato solicitado
    cout << "===========================" << '\n';
    cout << "      REGISTER STATE       " << '\n';
    cout << "===========================" << '\n';
    
    cout << "  Power On    : " << (powerOn ? "Yes" : "No") << '\n';
    cout << "  Error       : " << (error ? "Yes" : "No") << '\n';
    cout << "  Ready       : " << (ready ? "Yes" : "No") << '\n';
    cout << "  Overheat    : " << (overheat ? "Yes" : "No") << '\n';
    cout << "  Mode ID     : " << modeID << '\n';
    
    return 0;
}