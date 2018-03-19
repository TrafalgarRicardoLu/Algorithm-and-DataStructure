#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        while (n--) {
            string str;
            cin >> str;
            for (int i = 0; i < str.size(); ) {
                int j = i;
                int sum = 0;
                while (str[i++] == str[j]) {
                    sum++;
                }
                i--;
                if (sum == 1)
                    cout << str[j];
                else
                    cout << sum << str[j];
            }
            cout << endl;
        }
    }
    return 0;
}
