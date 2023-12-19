n = int(input())

fat = [1] * (n + 1)  # Ajuste para criar um vetor de tamanho (n + 1)

fat[0] = 1

for i in range(1, n + 1):
    fat[i] = fat[i - 1] * i

num = fat[n-1] // (fat[(n-1) // 2] * fat[(n-1) // 2])  # Use a divisão inteira (//) para obter um resultado inteiro

den = 2**(n-1)

ans = 100 * num / den
print(f'{ans:.2f}')
