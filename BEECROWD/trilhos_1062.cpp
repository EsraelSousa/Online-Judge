#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
	int n, x;
	bool isValido, newLine = false;
	stack<int> A, E;
	while(cin >> n && n){
		if(newLine) cout << '\n';
		while(cin >> x){
			if(x == 0)
				break;
			isValido = true;
			vector<int> ordem;
			ordem.push_back(x);
			A.push(n);
			for(int i=2; i<=n; i++){
			    cin >> x;
			    ordem.push_back(x);
			    A.push(n-i+1);
			}
			int p = 0;
			while(A.size()){
			    x = A.top();
			    A.pop();
			    if(x == ordem[p]){
			        p++;
			        while(!E.empty() && E.top() == ordem[p]){
			            E.pop();
			            p++;
			        }
			    }
			    else{
			        E.push(x);
			    }
			}
			while(E.size() && E.top() == ordem[p]){
	            E.pop();
                p++;
			}
			cout << (E.empty()? "Yes\n" : "No\n");
			while(E.size()) E.pop();
		}
		newLine = true;
	}
	cout << '\n';
	return 0;
}
