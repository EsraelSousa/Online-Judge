#include <bits/stdc++.h>

using namespace std;

int mem[105][105];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    string s1, s2;
    char s[205];
    int t=1, c, i, j;
    while(cin >> s1 && s1 != "#"){
        cin >> s2;
        for(i=0; i<=s1.size(); i++) mem[i][0] = i;
        for(i=0; i<=s2.size(); i++) mem[0][i] = i;
        for(i=1; i<=s1.size(); i++){
            for(j=1; j<=s2.size(); j++){
                mem[i][j] = (s1[i-1] == s2[j-1])? 1+mem[i-1][j-1] : min(mem[i-1][j], mem[i][j-1]) +1;
            }
        }
        c = mem[s1.size()][s2.size()];
        i = s1.size(), j = s2.size();
        s[c] = '\0';
        //cout << c << '\n';
        while(c--){
            if(i>0 && j>0 && s1[i-1] == s2[j-1]) 
                s[c] = s1[i-1], i--, j--;
            else{
                if(j > 0 && mem[i][j] - 1 == mem[i][j-1]) s[c] = s2[j-1], j--;
                else s[c] = s1[i-1], i--;
            }
        }
        cout <<"Teste " << t++ << '\n' <<  s << "\n\n";
    }
    return 0;
}