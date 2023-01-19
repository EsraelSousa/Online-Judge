#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const int MAXN = 1e5+5;
const int IFN = 1e5+2;
int v[MAXN], answers[MAXN];
int id[MAXN];
int ans=0;

void remove(int x){  // TODO: remove value at idx from data structure
	// tinha uma qtd x no intervalo
	if(id[x] == x)
		ans--;
	id[x]--;
	// apos remover uma ocorrencia agora uma uma qtd x no intervalo
	if(id[x] == x){
		ans++;
	}
}

void add(int x){    // TODO: add value at idx from data structure
	// se tinha uma qtd x no intervalo
	if(id[x] == x)
		ans--;
	id[x]++;
	// agora tem uma qtd x no intervalo
	if(id[x] == x)
		ans++;
}

int get_answer(){ // TODO: extract the current answer of the data structure
	return ans;
}

int block_size;

struct Query {
    int l, r, idx;
    bool operator<(Query other) const
    {
        return make_pair(l / block_size, r) <
               make_pair(other.l / block_size, other.r);
    }
};

// adaptação do cp algorithm
void mo_s_algorithm(vector<Query>& queries) {
    sort(queries.begin(), queries.end());
    // TODO: initialize data structure
    int cur_l = queries[0].l;
    int cur_r = queries[0].l-1;
    // invariant: data structure will always reflect the range [cur_l, cur_r]
    for (Query q : queries) {
    	while (cur_r < q.r) {
            cur_r++;
            add(v[cur_r]);
        }
        while (cur_l > q.l) {
        	cur_l--;
            add(v[cur_l]);
        }
        while (cur_l < q.l) {
            remove(v[cur_l]);
            cur_l++;
        }
        while (cur_r > q.r) {
            remove(v[cur_r]);
            cur_r--;
        }
        answers[q.idx] = get_answer();
    }
}

int main(){
 	ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
 	int n, q, l, r;
 	cin >> n >> q;
 	block_size = sqrt(n);
 	for(int i=1; i<=n; i++){
 		cin >> v[i];
 		if(v[i] > n) v[i] = IFN;
 	}
 	vector<Query> qry;
 	Query x;
 	for(int i=0; i<q; i++){
 		cin >> l >> r;
 		if(l == 0 && r == 0) continue;
 		x.l = min(l, r), x.r = max(l, r);
 		x.idx = i;
 		qry.push_back(x);
 	}
 	mo_s_algorithm(qry);
 	for(int i=0; i<q; i++)
		cout << answers[i] << '\n';
 	return 0;
 }
 