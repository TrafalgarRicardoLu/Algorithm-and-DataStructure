#include<iostream>
#include<string>
#include<map>
#include<sstream>
using namespace std;
int main()
{
    map <string, int> a;
    string     s;
    while (getline(cin, s) && s[0] != '#')
    {
        a.clear();
        stringstream ss;
        ss << s;
        while (ss)
        {
            string w;
            ss >> w;
            a[w] = 1;
        }
        cout << a.size() - 1 << endl;
    }
    return 0;
}