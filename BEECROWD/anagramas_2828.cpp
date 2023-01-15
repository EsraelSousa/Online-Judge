<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

typedef long long ll;

ll modpow(ll base, ll expo, ll mod){
    if (expo == 0) return 1%mod;
    ll u = modpow(base, expo/2, mod);
    u = (u*u)%mod;
    if (expo%2) u = (u*base)%mod;
    return u;
}

int main(){
    ll n, i, freq[30];
    ll fatmod[100005], mod=(ll)1e9+7, den=1;
    fatmod[0]=1;
    char txt[100005];
    memset(freq, 0, sizeof(freq));
    scanf("%s", txt);
    n=strlen(txt);
    for(i=0; i<n; i++){
        freq[ txt[i]-'a' ]++;
    }
    for(i=1; i<=n; i++){
        fatmod[i] = (fatmod[i-1]*i)%mod;
    }
    for(i=0; i<26; i++){
        den = ((den%mod)*(fatmod[ freq[i] ]))%mod;
    }
    printf("%lld\n", ((fatmod[n]%mod)*(modpow(den, mod-2, mod)%mod)%mod));
    return 0;
}
=======
#include <stdio.h>
#include <string.h>

typedef long long ll;

ll modpow(ll base, ll expo, ll mod){
    if (expo == 0) return 1%mod;
    ll u = modpow(base, expo/2, mod);
    u = (u*u)%mod;
    if (expo%2) u = (u*base)%mod;
    return u;
}

int main(){
    ll n, i, freq[30];
    ll fatmod[100005], mod=(ll)1e9+7, den=1;
    fatmod[0]=1;
    char txt[100005];
    memset(freq, 0, sizeof(freq));
    scanf("%s", txt);
    n=strlen(txt);
    for(i=0; i<n; i++){
        freq[ txt[i]-'a' ]++;
    }
    for(i=1; i<=n; i++){
        fatmod[i] = (fatmod[i-1]*i)%mod;
    }
    for(i=0; i<26; i++){
        den = ((den%mod)*(fatmod[ freq[i] ]))%mod;
    }
    printf("%lld\n", ((fatmod[n]%mod)*(modpow(den, mod-2, mod)%mod)%mod));
    return 0;
}
>>>>>>> refs/remotes/origin/master
