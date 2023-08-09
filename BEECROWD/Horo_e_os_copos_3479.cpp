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

string getSigno(int dia, int mes) {
    if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 19))
        return "aries";
    else if ((mes == 4 && dia >= 20) || (mes == 5 && dia <= 20))
        return "touro";
    else if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20))
        return "gemeos";
    else if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 22))
        return "cancer";
    else if ((mes == 7 && dia >= 23) || (mes == 8 && dia <= 22))
        return "leao";
    else if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22))
        return "virgem";
    else if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22))
        return "libra";
    else if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21))
        return "escorpiao";
    else if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21))
        return "sagitario";
    else if ((mes == 12 && dia >= 22) || (mes == 1 && dia <= 19))
        return "capricornio";
    else if ((mes == 1 && dia >= 20) || (mes == 2 && dia <= 18))
        return "aquario";
    else
        return "peixes";
}

int main(){
    fast
    int dia, mes;
    char barra;
    cin >> dia >> barra >> mes;
    cout << getSigno(dia, mes) << '\n';
    return 0;
}