#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
#include <string>
#include <sstream>

// #include <bits/stdc++.h>
using namespace std;

void separate(string &s, string &p1, string &p2){
	int i = 0;
	while(s[i] == ' ')
		i++;
	if(s[i] == '"'){
		i++;
		while(s[i] != '"')
			p1.push_back(s[i++]);
        i++;
	}
	else{
		while(s[i] != ' ')
			p1.push_back(s[i++]);
        i++;
	}
    
	while(s[i] == ' ')
		i++;
	if(s[i] == '"'){
		i++;
		while(s[i] != '"')
			p2.push_back(s[i++]);
	}
	else{
		while(i<s.size() && s[i] != ' ')
			p2.push_back(s[i++]);
	}
	//cout << s << ' ' << p1 << '|' << p2 << '\n';
	for(auto &c: p1)
		c = tolower(c);
	for(auto &c: p2)
		c = tolower(c);
}

string removeSpacesExtras(string &s){
    string ans;
    for(char c: s){
        if(!ans.empty() && ans.back() == ' ' && c == ' ')
            continue;
        ans.push_back(c);
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int r, n, tes = 1;
    string s, p1, p2;
    char c;
    while(cin >> r && r){
    	cin >> n;
    	getline(cin, s);
    	p1 = p2 = "";
    	separate(s, p1, p2);
        //p1 = removeSpacesExtras(p1);
        //p2 = removeSpacesExtras(p2);
    	r -= 2*n * ((r-1)/(2*n));
    	//if(tes == 1042) cout << s << '\n';
    	cout << tes++ << ". " << (r > n? p2 : p1) << '\n';
    }
    return 0;
}
