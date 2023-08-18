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

struct Data{
    int range;
    int lt; // left
    int rt; // right

    Data(){

    }

    Data(int range, int left, int right) : range(range), lt(left), rt(right){

    }

    bool operator<(const Data &other) const{
        if(this->range == other.range){
            if(this->lt == other.lt)
                return this->rt < other.rt;
            return this->lt < other.lt;
        } 
        return this->range < other.range;
    }

    
};

const int MAXN = 1e6+5;

Data objects[MAXN];

struct CustomComparator {
    bool operator()(const ii &a, const ii &b) {
        return a.first < b.second;
    }

    bool operator()(const ii &a, const ii &b){
        return a.ff < b.ff;
    }
};

int main(){
    fast
    int n, ai, bi;
    while(cin >> n){
        set<ii, CustomComparator> copyObjects;
        for(int i=0; i<n; i++){
            cin >> ai >> bi; // range of object
            objects[i] = Data(bi-ai, ai, bi);
            copyObjects.insert(ii(ai, bi));
        }
        sort(objects, objects+n);
        int ans = 0; // number of photos
        for(int i=0; i<n; i++){
            ii object = ii(objects[i].lt, objects[i].rt);
            if(copyObjects.find(object) != copyObjects.end()){ // Daniel have to take
                // pegue os elementos 
                copyObjects.erase(object);
                auto itf = copyObjects.lower_bound(object);
                while(itf != copyObjects.end() & itf->second <= object.second){
                    auto copyIt = itf;
                    copyObjects.erase(copyIt);
                    itf++;
                }
            }
        }
    }
    return 0;
}