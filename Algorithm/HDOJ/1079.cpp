#include <iostream>
using namespace std;
int main() {
    int year, month, day;
    int T, sum;
    cin >> T;
    while (T--) 
    {
        cin >> year >> month >> day;
        sum = month + day;
        if (!(sum & 1) || month == 9 && day == 30 || month == 11 && day == 30)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}