// incompleto
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    ll C, Va, Vb, T, I, Ana = 0, Bia = 0;
    cin >> C >> Va >> Vb >> T >> I;
    C *= 100;
    I *= 100;
    T *= 60;
    Ana = (I + ((T*Va)))%C; // posição de Ana no tempo T-1
    Bia = (I + ((T*Vb)))%C; // posição de BIa no tempo T-1
    //cout << Ana << ' ' << Bia << '\n';
    //cout << fixed << setprecision(12) << 1.0 * (C-Ana) / Va << ' ' << 1.0 * (C-Bia) / Vb << ' ' << (1.0 * (C-Ana) / Va) - (1.0 * (C-Bia) / Vb) <<'\n';
    if(Ana == 0 && Bia == 0) cout << ((Va >= Vb)? "Ana\n" : "Bia\n");
    //else if(Ana == 0) cout << "Ana\n";
    //else if(Bia == 0 ) cout << "Bia\n";
    else cout << ((1.0 * (C-Ana) / Va <= 1.0 * (C-Bia) / Vb)? "Ana\n" : "Bia\n");
    return 0;
}

/*
500 100 200 20 300
*/