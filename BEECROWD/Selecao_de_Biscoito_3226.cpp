#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(int argc, char* argv[]) {
  	ios::sync_with_stdio(false);
  	cin.tie(nullptr);
  	priority_queue<int> maxPq;
  	priority_queue<int, vector<int>, greater<int> > minPq;
  	string input;
  	int diametro;
  	while(cin >> input){
		if(input == "#"){
			diametro = minPq.top();
			minPq.pop();
			cout << diametro << '\n';
			if(maxPq.size() != minPq.size() && maxPq.size())
				minPq.push(maxPq.top()), maxPq.pop();
		}
		else{
			diametro = 0;
			for(char x: input)
				diametro = 10*diametro + x - '0';
			if(minPq.size() && diametro > minPq.top()){
				minPq.push(diametro);
				if(minPq.size() > maxPq.size() + 1)
					maxPq.push(minPq.top()), minPq.pop();
			}
			else{
				maxPq.push(diametro);
				if(maxPq.size() > minPq.size())
					minPq.push(maxPq.top()), maxPq.pop();
			}
		}
  	}
  	return 0;
}
