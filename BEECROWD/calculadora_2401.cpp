<<<<<<< HEAD
#include <bits/stdc++.h>

using namespace std;

int main() {
    double res=1;
    char op;
    int qtd_l, d;
    cin >> qtd_l;
    for(int i=0; i<qtd_l; i++){
        cin >> d >> op;
        (op=='*')? res*=d : res/=d;
    }
    printf("%.0lf\n", res);
}
=======
#include <bits/stdc++.h>

using namespace std;

int main() {
    double res=1;
    char op;
    int qtd_l, d;
    cin >> qtd_l;
    for(int i=0; i<qtd_l; i++){
        cin >> d >> op;
        (op=='*')? res*=d : res/=d;
    }
    printf("%.0lf\n", res);
}
>>>>>>> refs/remotes/origin/master
