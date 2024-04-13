#include <iostream>

using namespace std;

int main(){
    // Seu código vai aqui
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int s1 = (a+b)-(c+d);
	int s2 = (a+c)-(b+d);
	int s3 = (a+d)-(b+c);
	cout << min(abs(s1), min(abs(s2), abs(s3))) << '\n';
    return 0;
}
