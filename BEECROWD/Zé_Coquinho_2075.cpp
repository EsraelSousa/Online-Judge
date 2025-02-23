#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(nullptr);        \
    cout.tie(nullptr);
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<vi> vvi;
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define left(x) (2 * x)
#define right(x) (2 * x + 1)

vector<ll> catalanNumbers;
unordered_map<string, ll> memo;


void calculeCatalanNumbers(int n){
    catalanNumbers.resize(n+1);
    catalanNumbers[0] = catalanNumbers[1] = 1;

    for(int i=2; i<=n; i++){
        catalanNumbers[i] = 0;
        for(int j=0; j<i; j++)
            catalanNumbers[i] += catalanNumbers[j] * catalanNumbers[i-1-j];
    }
}

ll dp(int i, int open_count, bool is_less, const string &S)
{
    int N = S.size();
    if (open_count < 0 || open_count > (N - i))
        return 0;
    if (i == N)
        return (open_count == 0) ? 1 : 0;

    string key = to_string(i) + "," + to_string(open_count) + "," + to_string(is_less);
    if (memo.find(key) != memo.end())
        return memo[key];

    ll count = 0;
    char current_char = S[i];

    // Podemos adicionar '('
    if (is_less || '(' < current_char)
    {
        count += dp(i + 1, open_count + 1, true, S);
    }
    else if ('(' == current_char)
    {
        count += dp(i + 1, open_count + 1, is_less, S);
    }

    // Podemos adicionar ')'
    if (open_count > 0)
    {
        if (is_less || ')' < current_char)
        {
            count += dp(i + 1, open_count - 1, true, S);
        }
        else if (')' == current_char)
        {
            count += dp(i + 1, open_count - 1, is_less, S);
        }
    }

    return memo[key] = count;
}

ll count_balanced_less_than(const string &S)
{
    memo.clear();
    return dp(0, 0, false, S);
}

string getAnsNisOdd(int n, ll k) {
    string ans(n, '(');
    
    // Mapeamento para os próximos caracteres válidos
    unordered_map<char, char> nextSmallest = {
        {'(', '('}, 
        {')', '('}
    };
    unordered_map<char, char> nextGreatest = {
        {'(', ')'},
        {')', ')'}
    };

    long long startOpen = 0;
    long long startClose = startOpen + (1LL << (n - 1)); // Corrigir o cálculo de startClose para 2^(n-1)

    // Determina o primeiro caractere
    if(k < startClose) {
        ans[0] = '(';
        k -= startOpen;
    } else {
        ans[0] = ')';
        k -= startClose;
    }

    // Preenche os outros caracteres da sequência
    for(int idx = 1; idx < n; idx++) {
        long long midPoint = 1LL << (n - idx - 1); // Ajuste para o cálculo correto de midPoint
    
        if(k < midPoint) {
            ans[idx] = nextSmallest[ans[idx-1]];
        } else {
            ans[idx] = nextGreatest[ans[idx-1]];
            k -= midPoint;
        }
    }
    return ans;
}

long long getLexicographicIndex(string S) {
    int n = S.size();
    long long k = 0;
    
    for (int idx = 0; idx < n; idx++) {
        long long midPoint = 1LL << (n - idx - 1);  // 2^(n-idx-1)
        
        // Se encontramos ')', adicionamos as possibilidades de '(' anteriores
        if (S[idx] == ')') {
            k += midPoint;
        }
    }

    return k + 1; // Para tornar 1-based
}


string getAnsNisEven(int n, ll k){
    string s(n, ')');
    for (int i = 0; i < n; i++) {  // Construímos da esquerda para a direita
        s[i] = '(';
        ll kth = getLexicographicIndex(s);  // Índice da string na ordem total
        ll valids = count_balanced_less_than(s);  // Quantidade de strings válidas antes dela
        
        if (k < kth - valids) {
            // Se `k` for maior ou igual a quantidade de strings não balanceadas antes, mantemos '('
            continue;
        } else {
            // Caso contrário, reverte para ')'
            s[i] = ')';
        }
    }
    return s;
}

void task()
{
    int N;
    ll K;
    cin >> N >> K;
    if(N & 1)
        cout << getAnsNisOdd(N, K) << '\n';
    else if(K >= (1LL << N) - catalanNumbers[N/2])
        cout << "-1\n";
    else
        cout << getAnsNisEven(N, K) << '\n';
}

int main()
{
    fast int tes;
    calculeCatalanNumbers(25);
    string s(50, ')');
    //cout << catalanNumbers[25] << ' ' << count_balanced_less_than(s) << '\n';
    cin >> tes;
    while (tes--)
        task();
    return 0;
}