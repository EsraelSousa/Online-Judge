// TLE

#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string.h>
#include <algorithm>
#include <queue>
#include <iomanip>
#include <cmath>
#include <numeric>
#include <stdlib.h>

//   #include <bits/stdc++.h>
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

#define ARRAY_SIZE(a) sizeof(a)/sizeof(a[0]) 

// Alphabet size (# of symbols) 
#define ALPHABET_SIZE (2) 

// Converts key current character into index 
// use only 'a' through 'z' and lower case 
#define CHAR_TO_INDEX(c) ((int)c - (int)'0') 

// trie node 
struct TrieNode 
{ 
	struct TrieNode *children[ALPHABET_SIZE];
	int prefix;

	// isEndOfWord is true if the node represents 
	// end of a word 
	bool isEndOfWord; 
}; 

// Returns new trie node (initialized to NULLs) 
struct TrieNode *getNode(void) 
{ 
	struct TrieNode *pNode = NULL; 

	pNode = (struct TrieNode *)malloc(sizeof(struct TrieNode)); 
	if(pNode == NULL){
		cout << "falha alocacao\n";
		exit(0);
	}

	if (pNode) 
	{ 
		int i; 

		pNode->isEndOfWord = false;
		pNode->prefix = 0;

		for (i = 0; i < ALPHABET_SIZE; i++) 
			pNode->children[i] = NULL; 
	} 

	return pNode; 
} 

// If not present, inserts key into trie 
// If the key is prefix of trie node, just marks leaf node 
void insert(struct TrieNode *root, string &key) 
{ 
	int level; 
	int length = sz(key); 
	int index; 

	struct TrieNode *pCrawl = root; 
	pCrawl->prefix++;

	for (level = 0; level < length; level++) 
	{ 
		index = CHAR_TO_INDEX(key[level]); 
		if (!pCrawl->children[index]) 
			pCrawl->children[index] = getNode(); 
        pCrawl->prefix++;
		pCrawl = pCrawl->children[index]; 
	} 

	// mark last node as leaf 
	pCrawl->isEndOfWord = true; 
} 


int dfs(struct TrieNode *root){
    if(root == NULL) return 0;
    int ans = 0;
    ans += (root->isEndOfWord == true)? 1 : 0;
    for(int i=0; i<ALPHABET_SIZE; i++){
        ans += dfs(root->children[i]);
    }
    free(root);
    return ans;
}

void task(){
    int n, k;
    string s, aux;
    set<string> ans;
    struct TrieNode *root = getNode();
    cin >> n >> k >> s;
    //insert(root, s);
    while(k--){
    	int a ,b;
    	cin >> a >> b;
    	a--;
    	aux = s;
    	sort(aux.begin()+a, aux.begin()+b);
    	insert(root, aux);
    }
    cout << dfs(root) << '\n';
}

int main(){
    fast
    int tes = 1;
    cin >> tes;
    while(tes--)
        task();
    return 0;
}
