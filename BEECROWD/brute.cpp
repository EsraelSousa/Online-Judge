#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <string>

int main() {
    // Inicializa a semente do gerador de números aleatórios com o tempo atual
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    for (int i = 0; i < 100; ++i) {
        // Gera 4 números de ponto flutuante no intervalo [0, 10] com 1 casa decimal
        float num1 = static_cast<float>(std::rand() % 100) / 10.0;
        float num2 = static_cast<float>(std::rand() % 100) / 10.0;
        float num3 = static_cast<float>(std::rand() % 100) / 10.0;
        float num4 = static_cast<float>(std::rand() % 100) / 10.0;

        // Cria o nome do arquivo com base no contador
        std::string nomeArquivo = "numeros_" + std::to_string(i) + ".txt";

        // Abre o arquivo para escrever
        std::ofstream arquivo(nomeArquivo);

        // Verifica se o arquivo foi aberto com sucesso
        if (!arquivo.is_open()) {
            std::cerr << "Erro ao abrir o arquivo " << nomeArquivo << std::endl;
            return 1;
        }

        // Escreve os números gerados no arquivo
        arquivo << std::fixed << std::setprecision(1);
        arquivo << num1 << " " << num2 << " " << num3 << " " << num4 << std::endl;

        // Fecha o arquivo
        arquivo.close();

        std::cout << "Números gerados e armazenados em '" << nomeArquivo << "'." << std::endl;
    }

    return 0;
}
