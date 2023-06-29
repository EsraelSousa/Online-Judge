#include <iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
	string s;
	int cont;
	while(getline(cin, s)){
		if(s.size() == 1)
			cout << "1" + s + "1\n";
		else{
			cont = 0;
			for(int i=0; i<s.size(); i++){
				int j = i+1;
				if(j == s.size())
					cout << "1" << s[i] << (s[i]=='1'? "1" : "") << "1";
				else{
					if(s[i] == s[j]){
						
						cont = 2;
						while(j+1 < s.size() && s[j] == s[j+1] && cont + 1 <= 9) j++, cont++;
						if(j+1 == s.size() & s[j] == s[j-1] && cont < 9){
							//cont++;
							//j++;
						}
						cout << cont << s[i];
						
						i = j;
					}
					else{
						j = i;
						cout << "1";
						while(j+1 < s.size() && s[j] != s[j+1]){
							cout << s[j];
							if(s[j]=='1') cout <<'1';
							j++;
						}
						if(j+1 == s.size() && s[j] != s[j-1]){
							cout << s[j];
							if(s[j]=='1') cout <<'1';
							j++;
						}
						cout << '1';
						i = j-1;
					}
				}
			}
			cout << "\n";
		}
	}
	return 0;
}
