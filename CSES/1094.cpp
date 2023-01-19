#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int n;
    cin >> n;
    vector<int> vetor(n);
    for(int i=0; i<n; i++) cin >> vetor[i];
    long long ans = 0;
    for(int i=1; i<n; i++)
        if(vetor[i] < vetor[i-1]){
            ans += (vetor[i-1] - vetor[i]);
            vetor[i] += vetor[i-1] - vetor[i];
        }
    cout << ans << '\n';
    return 0;
}