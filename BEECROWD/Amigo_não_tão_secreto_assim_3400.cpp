/*
Um derangement (ou permutação desarranjada) é uma permutação onde nenhum elemento 
está em sua posição original. O número de derangements de NN elementos é denotado
por !N!N e pode ser calculado pela fórmula:

def deran(n):
if n == 0
    return 1
if n == 1:
    return 0
return (n-1) * (deran(n-1) + deran(n-2)
*/

#pragma "GCC unroll-loops"

#include <bits/stdc++.h>

using namespace std;

vector<long long> memo;
int MOD = 1e9+7;

// faz iterativo pq recursivo estoura a memoria de recursão
long long derangement(long long n){
    if (n == 0) return 1;
    if (n == 1) return 0;
    memo[0] = 1;
    memo[1] = 0;
    for(int i=2; i<=n; i++)
        memo[i] =  ((i-1) * ((memo[i-1] + memo[i-2]) % MOD)) % MOD;
    return memo[n];
}

int main(){
    int n;
    cin >> n;
    memo.resize(n+1, -1);
    cout << derangement(n) << '\n';
    return 0;
}
