#include <bits/stdc++.h>

using namespace std;

int tv[1005][1005];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int tes = 1;
    int n, m, x, y, xi, yi;
    while(cin >> n >> m){
        if(n==0 && m==0) break;
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                cin >> tv[i][j];
        x = y = 0;
        
        while(cin >> xi >> yi){
            if(xi == 0 && yi == 0) break;
            x = yi;
            y = xi;
            /*cout << x << ' ' << y << " val ini\n";
            for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                cout << tv[ (x+i)%n ][ (y+j)%m ] << ((j == m-1)? '\n' : ' ');*/
        }
        x %= n;
        y %= m;
        cout << y << ' ' << x << " ini\n";
        if(x < 0) x = n-((x+n)%n);
        if(y < 0) y = m-((y+m)%m);
        cout << y << ' ' << x << " ini\n";
        cout << "Teste " << tes++ << '\n';
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                //cout << (y+i)%n << ' ' << (x+j)%m <<  ' ' << tv[ (x+i)%n ][ (y+j)%m ] << '\n' ;
                cout << tv[ (x+i)%n ][ (y+j)%m ] << ((j == m-1)? '\n' : ' ');
            }
        }
        cout << '\n';
    }
    return 0;
    
}

/*
3 3
1 2 3
4 5 6
7 8 9
1 0
1 -1
0 0
3 4
6 7 8 5
10 11 12 9
2 3 4 1
-3 2
0 0
0 0
*/