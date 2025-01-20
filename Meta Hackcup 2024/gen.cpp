#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int NUM_POINTS = 300000;
    const int MAX_COORDINATE = 1000000000;

    // Inicializar a semente para a geração de números aleatórios
    srand(time(0));

    // Abrir um arquivo para salvar os pontos gerados
    ofstream outfile("points.txt");
    
    // Gerar os pontos aleatórios
    for (int i = 0; i < NUM_POINTS; ++i) {
        int x = rand() % (MAX_COORDINATE + 1);  // Gera 0 <= X <= 10^9
        int y = rand() % (MAX_COORDINATE + 1);  // Gera 0 <= Y <= 10^9
        outfile << x << " " << y << "\n";       // Salva os pontos no arquivo
    }

    outfile.close();  // Fecha o arquivo

    cout << "300,000 pontos foram gerados e salvos no arquivo 'points.txt'.\n";

    return 0;
}
