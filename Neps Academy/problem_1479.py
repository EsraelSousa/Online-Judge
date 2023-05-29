a = int(input())
b = int(input())
c = int(input())
maior = max(a, b, c)
menor = min(a, b, c)
idade = a + b + c - maior - menor
print(idade)
