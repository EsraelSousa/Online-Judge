#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
typedef long long ll;

ll countDigit(ll n, short d) {
    ll res = 0, pot = 1, rem = 0;
    while (n) {
        int x = n % 10;
        n /= 10;

        if (x > d) res += (n + 1) * pot;
        else res += n * pot;
        if (x == d) res += rem + 1;

        if (d == 0) res -= pot;

        rem += pot * x;
        pot *= 10;
    }
    return res;
}

ll countSize(ll n) {
    ll ans = 1; // 1 because it includes 0...n
    for (short i = 0; i < 10; i++)
        ans += countDigit(n, i);
    return ans;
}

int digits(ll n) {
    return (n == 0) ? 1 : static_cast<int>(log10(n)) + 1;
}

int main() {
    fast
    int k;
    ll l, r;
    cin >> k >> l >> r;

    // Cálculo de prefix sum para a quantidade de dígitos
    vector<ll> prefixSum;
    ll totalDigits = 0;
    for (ll i = 1; i <= r; i++) {
        totalDigits += digits(i);
        prefixSum.push_back(totalDigits);
    }

    ll startIdx = l;
    ll endIdx = r;

    // Encontrar o intervalo no qual o número final vai se encaixar
    ll ans = 0;
    for (ll i = startIdx; i <= endIdx - k; i++) {
        string sub = "";
        for (ll j = i; j < i + k; j++) {
            sub += to_string(j);
        }
        
        // Calcular o maior número que pode ser extraído
        ans = max(ans, stoll(sub));
    }

    cout << ans << '\n';
    return 0;
}
