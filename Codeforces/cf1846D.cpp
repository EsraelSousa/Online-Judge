#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<vi> vvi;
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define left(x) (2*x)
#define right(x) (2*x + 1)

double newBase(double d, double h, double h_){
    // sebemos que o triagulo vai ser proporcional
    // d / h == d_ / h_
    // d_ / h_ == d / h
    // d_ = h_ * (d / h)
    return h_ * (1.00 * d / h);
}

void task(){
    int n;
    double d, h;
    cin >> n >> d >> h;
    double sumAreas = 0, area = 1.00 * d * h / 2.00;
    vi alturas(n);
    for(auto &x: alturas) 
        cin >> x;
    for(int i=0; i<n-1; i++){
        if(alturas[i] + h > alturas[i+1]){
            double h_ = alturas[i] + h - alturas[i+1];
            sumAreas += area - (h_ * newBase(d, h, h_)) / 2.00;
        }
        else
            sumAreas += area;
    }
    cout << sumAreas + area << '\n';
}

int main(){
    fast
    cout << fixed << setprecision(8);
    int tes;
    cin >> tes;
    while(tes--)
        task();
    return 0;
}