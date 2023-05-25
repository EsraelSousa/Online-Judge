#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<vi> vvi;
#define fs first
#define sd second;
#define all(x) x.begin(), x.end()

/*
Imagine um circulo, você isola do 0º a Rº, aí você quer cortar o restante do circulo em fatias que a parte isolada tem a mesma simetria
então basta descobrir o maior inteiro que divide ambas em partes simetricas
*/

int main(){
    int a, b;
    char ponto;
    cin >> a >> ponto >> b;
    int raio = 100*a+b;
    cout << 36000/ __gcd(36000, raio) << '\n';
    return 0;
}