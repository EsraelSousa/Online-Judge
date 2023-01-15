#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5+5;
const int ALP = 26;

#define pb push_back
#define mp make_pair

#define pic pair<int, char>

vector<pic> adj[MAXN];
bool visited[MAXN];

struct no{
	int prefix;
    int inicio;
	bool isEnd;
	struct no* child[ALP];
};
 
typedef struct no Tno;
 
Tno* create(){
	//cout << "cria\n";
	//cout << sizeof(struct no) << '\n';
	Tno *a = (Tno*) malloc (sizeof(Tno));
	//cout << sizeof(a);
	if(a == NULL){
		cout << "erro na alocacao\n";
		exit(0);
	}
	a->prefix = a->inicio = 0;
	a->isEnd = 0;
	for(int i=0; i<ALP; ++i)
		a->child[i] = NULL;
	return a;
}
 
void insert(Tno *root, string& s){
	Tno *aux = root;
	
	for(int i=0; i<s.size(); ++i){
		if(aux->child[ s[i]-'a' ] == NULL)
			aux->child[s[i]-'a'] = create();
		//cout << s[i];
		aux = aux->child[ s[i]-'a' ];
	}
	aux->prefix = 1;
	aux->isEnd = 1;
	//cout << endl;
}
 
void mydelete(Tno *root){
	for(int i=0; i<ALP; i++)
		if(root->child[i] != NULL)
			mydelete(root->child[i]);
	free(root);
}
 
void getAns(Tno *root, string s){
	//if(root->isEnd) 
    //cout << s << '\n';
	for(int i=0; i<ALP; ++i)
		if(root->child[i] != NULL){
			s.push_back((char)(i+'a'));
			getAns(root->child[i], s);
            s.pop_back();
		}
	//5.pop_back();
}

void dfs(int v, string& s, Tno* root){
    visited[v] = true;
    for(pic a: adj[v]){
        if(!visited[a.first]){
            s.push_back(a.second);
            insert(root, s);
            //cout << s << '\n';
            dfs(a.first, s, root);
            s.pop_back();
        }
    }
}

int sumStrings(Tno *root, int qtd){
    int sum = root->prefix;
    root->inicio = qtd;
    for(int i=0; i<ALP; i++){
        if(root->child[i] != NULL)
            sum += sumStrings(root->child[i], qtd+1);
    }
    return sum;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int n, q, l, r;
    int pai;
    char letra;
    Tno *root = create();
    cin >> n >> q;
    for(int i=2; i<=n; i++){
        cin >> pai >> letra;
        adj[pai].pb(mp(i, letra));
    }
    string s = "";
    dfs(1, s, root);
    root->prefix = sumStrings(root, 1) + 1;
    cout << root->prefix << '\n';
    getAns(root, "");
    while(q--){
        cin >> l >> r;
        if(l > r) swap(l, r);
        cout << ((l>1)? getQuery(root, l-1, r-1, 0) : 0) << '\n';
    }
    mydelete(root);
    return 0;

