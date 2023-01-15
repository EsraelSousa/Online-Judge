#include <bits/stdc++.h>

using namespace std;

template<typename T> vector<int> pi(T s) {
	vector<int> p(s.size());
	for (int i = 1, j = 0; i < s.size(); i++) {
		while (j and s[j] != s[i]) j = p[j-1];
		if (s[j] == s[i]) j++;
		p[i] = j;
	}
	return p;
}

// c82524
template<typename T> vector<int> matching(T& s, T& t) {
	vector<int> p = pi(s), match;
	for (int i = 0, j = 0; i < t.size(); i++) {
		while (j and s[j] != t[i]) j = p[j-1];
		if (s[j] == t[i]) j++;
		if (j == s.size()) match.push_back(i-j+1), j = p[j-1];
	}
	return match;
}

template<typename T> int max_suffix(T s, bool mi = false) {
	s.push_back(*min_element(s.begin(), s.end())-1);
	int ans = 0;
	for (int i = 1; i < s.size(); i++) {
		int j = 0;
		while (ans+j < i and s[i+j] == s[ans+j]) j++;
		if (s[i+j] > s[ans+j]) {
			if (!mi or i != s.size()-2) ans = i;
		} else if (j) i += j-1;
	}
	return ans;
}

template<typename T> int max_cyclic_shift(T s) {
	int n = s.size();
	for (int i = 0; i < n; i++) s.push_back(s[i]);
	return max_suffix(s);
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    string pal, aux1, aux2, maior_lexi;
    cin >> pal;
    maior_lexi = pal;
    int posi = max_cyclic_shift(pal);
    int t = pal.size();
    pal += pal;
    pal.pop_back();
    for(int i = 0; i<t; i++) maior_lexi[i] = pal[i+posi];
    vector<int> qtd_padrao = matching(maior_lexi, pal);
    cout << qtd_padrao.size() << ' ' << qtd_padrao[0]+1 << '\n';
    return 0;
}
