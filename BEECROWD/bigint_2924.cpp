<<<<<<< HEAD
#include <bits/stdc++.h>

using namespace std;


void soma_e_mostra(string &num1, string num2){
    int carry=0, i, j, k=0, res;
    short resultado[200];
    i=num1.size()-1, j=num2.size()-1;
    while(i>-1 || j>-1){
        if(i>=0)
            carry+=num1[i]-'0';
        if(j>=0)
            carry+=num2[j]-'0';
        resultado[k] = carry%10;
        carry = carry/10;
        k++, i--, j--;
    }
    if(carry>0)
        resultado[k]=carry, k++;
    for(k--; k>=0; k--)
        cout << resultado[k];
    cout << endl;
}

int main(){
    string num1, num2;
    cin >> num1 >> num2;
    soma_e_mostra(num1, num2);
    return 0;
}
=======
#include <bits/stdc++.h>

using namespace std;


void soma_e_mostra(string &num1, string num2){
    int carry=0, i, j, k=0, res;
    short resultado[200];
    i=num1.size()-1, j=num2.size()-1;
    while(i>-1 || j>-1){
        if(i>=0)
            carry+=num1[i]-'0';
        if(j>=0)
            carry+=num2[j]-'0';
        resultado[k] = carry%10;
        carry = carry/10;
        k++, i--, j--;
    }
    if(carry>0)
        resultado[k]=carry, k++;
    for(k--; k>=0; k--)
        cout << resultado[k];
    cout << endl;
}

int main(){
    string num1, num2;
    cin >> num1 >> num2;
    soma_e_mostra(num1, num2);
    return 0;
}
>>>>>>> refs/remotes/origin/master
