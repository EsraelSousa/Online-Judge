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

struct compare{
    bool operator()(pair<int, string> &a, pair<int, string> &b){
        if(a.ff == b.ff){
            if(int(a.ss[0]) == int(b.ss[0]))
                return int(a.ss[1]) > int(b.ss[1]);
            return int(a.ss[0]) > int(b.ss[0]);
        }
        return a.ff < b.ff;
    }
};

int main(){
    fast
    int n;
    bool flag = 0;
    cout << fixed << setprecision(6);
    while(cin >> n && n){
        map<string, int> freq;
        int maxFreq = 0;
        int totalDigrafo = 0;
        string s, aux;
        cin.ignore();
        while(n--){
            getline(cin, aux);
            s += aux;
        }
        for(int i=0; i<sz(s)-1; i++){
            string curr;
            curr.push_back(s[i]);
            curr.push_back(s[i+1]);
            freq[curr] += 1;
            maxFreq = max(maxFreq, freq[curr]);
            totalDigrafo++;
        }
        priority_queue<pair<int, string>, vector<pair<int, string>>, compare> pq;
        for(auto &it: freq)
            pq.push({it.ss, it.ff});
        if(flag)
            cout << '\n';
        for(int i=0; i<5; i++){
            auto it = pq.top();
            pq.pop();
            cout << it.ss << ' ' << it.ff << ' ' << 1.0 * it.ff / totalDigrafo << '\n';
        }
        flag = 1;
    }
    return 0;
}