#include<iostream>
#include<string>
#include<algorithm>
#include<map>
using namespace std;
map <string, int> a;
int main()
{
    string b, c;
    while (getline(cin, b) && b != "")
    {
        for (int i = 0; i <= b.length(); i++)
            a[b.substr(0,i)]++;
    }
    while (cin >> c)
        cout << a[c] << endl;
}