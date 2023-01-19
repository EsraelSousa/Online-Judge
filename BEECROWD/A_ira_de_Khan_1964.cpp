// incompleto
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    ll C, Va, Vb, T, I, Ana, Bia;
    cin >> C >> Va >> Vb >> T >> I;
    C *= 100;
    I *= 100;
    T *= 60;
    Ana = (I+T*Va)%C;
    Bia = (I+T*Vb)%C;
    cout << Ana << ' ' << Bia << '\n';
    return 0;
}

/*
500 100 200 20 300
*/