#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<vi> vvi;

const int MAXN = 1e5+5;
const int INF = 1e9;

struct Headquarter {
    int location;
    int medals;
    int years;

    Headquarter() : location(-1), medals(-1), years(-1) {} // Construtor padrão
    Headquarter(int _location, int _medals, int _years) 
        : location(_location), medals(_medals), years(_years) {}

    bool operator<(const Headquarter &other) const {
        if (this->medals == other.medals)
            return this->years > other.years;
        return this->medals > other.medals;
    }
};

vi adj[MAXN];
vector<Headquarter> bestHeadquarter(MAXN, Headquarter());
priority_queue<tuple<int, Headquarter, int>, vector<tuple<int, Headquarter, int>>, greater<>> pq;
vector<int> Distance(MAXN, INF);
vector<bool> isHeadquarter(MAXN, false);

void calculeDistances() {
    //cout << pq.size() << " init\n";
    while (!pq.empty()) {
        auto [dist, headquarter, v] = pq.top();
        pq.pop();

        if (dist > Distance[v])
            continue;
        
        bestHeadquarter[v] = headquarter;
        Distance[v] = dist;

        for (auto &u : adj[v]) {
            if (dist + 1 < Distance[u]) {
                Distance[u] = dist+1;
                pq.push({dist + 1, headquarter, u});
            }
        }
    }
}

int main() {
    fast
    int L, S, Q, A;
    cin >> L >> S >> Q >> A;

    for(int i=1; i<=S; i++) {
        int index, medals, year;
        cin >> index >> medals >> year;
        if(!isHeadquarter[index]){
            bestHeadquarter[index] = Headquarter(i, medals, year);
            isHeadquarter[index] = 1;
            Distance[index] = 0;
        }
        else if(bestHeadquarter[index].medals < medals)
            bestHeadquarter[index] = Headquarter(i, medals, year);
        else if(bestHeadquarter[index].medals == medals && year > bestHeadquarter[index].years)
            bestHeadquarter[index] = Headquarter(i, medals, year);
    }

    for(int i=1; i<=L; i++)
        if(isHeadquarter[i])
            pq.push({0, bestHeadquarter[i], i});

    while (A--) {
        int u, v;
        cin >> u >> v;
        adj[u].emplace_back(v);
        adj[v].emplace_back(u);
    }

    calculeDistances();

    while (Q--) {
        int location;
        cin >> location;
        if(bestHeadquarter[location].location == -1)
            cout << "Noic\n";
        else
            cout << bestHeadquarter[location].location << '\n';
    }

    return 0;
}
