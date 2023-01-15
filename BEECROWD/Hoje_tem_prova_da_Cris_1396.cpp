#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int n, k, tes = 1;
    vector<pair<string,int>> alunos(105);
    vector<pair<string, int>>:: iterator it;
    while(cin >> n >> k && n+k){
    	for(int i=0; i<n; i++){
    		cin >> alunos[i].first;
    		alunos[i].second = i;
    	}
    	
    	int p = 0;
    	while(k && p<n){
    		it = min_element(alunos.begin()+p, alunos.begin()+n);
    		// cosigo p-esimo menor e colocar no lugar certo?
    		int troca = it->second-p;
    		if(troca > k){
    		    while(troca > k){
    		        it = min_element(alunos.begin()+p, alunos.begin()+it->second);
    		        troca = it->second-p;
    		    }
    		}
    		
    		if(troca <= k){
    			for(int i=it->second; troca>0 && alunos[i].first < alunos[i-1].first; i--){
    				alunos[i-1].second++;
    				alunos[i].second--;
    				swap(alunos[i], alunos[i-1]);
    				troca--;
    				k--;
    			}
    		}
    		p++;
    	}
    	cout << "Instancia " << tes++ << '\n';
    	for(int i=0; i<n; i++) cout << alunos[i].first << ' ';
    	cout << "\n\n";
    }
    return 0;
}
