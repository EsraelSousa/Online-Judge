#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <cmath>

using namespace std;

struct Point {
    int x, y;
};

// Função para calcular o máximo divisor comum (MDC) para simplificar a inclinação
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

// Função que retorna a quantidade máxima de pontos em uma linha
int max_points_on_line(vector<Point>& points) {
    int n = points.size();
    if (n < 2) return n;  // Se há menos de 2 pontos, todos já estão na mesma linha

    int max_points = 0;

    // Fixar cada ponto e calcular a inclinação em relação a todos os outros
    for (int i = 0; i < n; ++i) {
        unordered_map<string, int> slope_count;  // Mapa para contar as inclinações
        int duplicates = 1;  // Contagem de pontos duplicados
        int current_max = 0;

        for (int j = i + 1; j < n; ++j) {
            int dx = points[j].x - points[i].x;
            int dy = points[j].y - points[i].y;

            // Verificar se os pontos são idênticos
            if (dx == 0 && dy == 0) {
                duplicates++;
                continue;
            }

            // Simplificar a inclinação usando o MDC
            int g = gcd(dx, dy);
            dx /= g;
            dy /= g;

            // Normalizar a inclinação para garantir consistência
            if (dx < 0) {
                dx = -dx;
                dy = -dy;
            }

            // Criar uma chave única para cada inclinação (como string "dy/dx")
            string slope = to_string(dy) + "/" + to_string(dx);

            slope_count[slope]++;
            current_max = max(current_max, slope_count[slope]);
        }

        // O número máximo de pontos em linha é o máximo encontrado mais os duplicados
        max_points = max(max_points, current_max + duplicates);
    }

    return max_points;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
	int tes, n;
	cin >> tes;
	for(int i=0; i<tes; i++){
		cout << "Case #" << i << ": ";
		cin >> n;
    	vector<Point> points(n);
    	for(auto &p: points)
    		cin >> p.x >> p.y;
    	cout << n - max_points_on_line(points) << '\n';
	}
    return 0;
}