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

int main(){
    fast
    int C, Va, Vb, T, I;
    while(cin >> C >> Va >> Vb >> T >> I){
        C *= 100;
        I *= 100;
        T *= 60;
        double Ana = 1, Bia = 1;
        int sum = 0;
        for(int i=0; i<T; i++){
            sum += Va;
            sum %= C;
        }
        sum = (sum + I) % C;
        if(sum == 0) sum = C;
        Ana = (1.0 * C - sum) / Vb;
        //cout << C - sum << ' ';
        sum = I;
        for(int i=0; i<T; i++){
            sum += Vb;
            sum %= C;
        }
    
        if(sum == 0) sum = C;
        Bia = (1.0 * C - sum) / Va;
        //cout << C - sum << '\n';
        //cout << fixed << setprecision(15) << Ana / Va << ' ' << Bia / Vb << '\n';
        if(fabs(Ana - Bia) < 1e-9)
            cout << ((Va >= Vb)? "Ana\n" : "Bia\n");
        else // Ana / Va <= Bia / Vb
            cout << ((Ana < Bia)? "Ana\n" : "Bia\n");
    }
    return 0;
}

/*
6/8 <= 5/8 
*/