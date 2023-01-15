<<<<<<< HEAD
#include <iostream>

using namespace std;

int main(){
    short per_dia_1, per_dia_2;
    cin >> per_dia_1 >> per_dia_2;
    if(per_dia_1>=0 && per_dia_1<=2 && per_dia_2>=0 && per_dia_2<=2)
        cout << "nova" << endl;
    else if(per_dia_1>2 && per_dia_2>=0 && per_dia_2<=2)
        cout << "nova" << endl;
    else if(per_dia_1>=97 && per_dia_1<=100 && per_dia_2>=97 && per_dia_2<=100)
        cout << "cheia" << endl;
    else if(per_dia_1<97 && per_dia_2>=97 && per_dia_2<=100)
        cout << "cheia" << endl;
    else{
        if(per_dia_1 < per_dia_2)
            cout << "crescente" << endl;
        else
            cout << "minguante" << endl;
    }
    return 0;
}
=======
#include <iostream>

using namespace std;

int main(){
    short per_dia_1, per_dia_2;
    cin >> per_dia_1 >> per_dia_2;
    if(per_dia_1>=0 && per_dia_1<=2 && per_dia_2>=0 && per_dia_2<=2)
        cout << "nova" << endl;
    else if(per_dia_1>2 && per_dia_2>=0 && per_dia_2<=2)
        cout << "nova" << endl;
    else if(per_dia_1>=97 && per_dia_1<=100 && per_dia_2>=97 && per_dia_2<=100)
        cout << "cheia" << endl;
    else if(per_dia_1<97 && per_dia_2>=97 && per_dia_2<=100)
        cout << "cheia" << endl;
    else{
        if(per_dia_1 < per_dia_2)
            cout << "crescente" << endl;
        else
            cout << "minguante" << endl;
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
