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
    string input;
    int teste = 1;
    string dias[] = {"DOM", "SEG", "TER", "QUA", "QUI", "SEX", "SAB"};
    string memses[] = {"JAN", "FEV", "MAR", "ABR", "MAI", "JUN", "JUL", "AGO", "SET", "OUT", "NOV", "DEZ"};
    
    do{
        cin >> input;
        if(input != "FIM"){
            cout << "Previsao #" << teste++ << '\n';
            int day;
            string aux;
            int i;
            for(i=0; input[i] != ','; i++)
                aux.push_back(input[i]);
            while(dias[day] != aux)
                day++;
            aux = "";
            i++;
            aux = input.substr(i, 2);
            
            
            while(cin >> input && isdigit(input[0])){

            }
        }
    }while(input != "FIM");
    return 0;
}