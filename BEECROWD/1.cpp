#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    while (cin >> N && N != 0) {
        while (N--) {
            string line;
            cin >> line;
            int countOnes = 0;
            for (char digit : line) {
                int num = digit - '0';
                countOnes += num;
            }
            cout << (countOnes % 10) << endl;
        }
    }
    return 0;
}
