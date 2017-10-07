#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1, s2;
    while (cin >> s1 >> s2)
    {
        if (s1.length() < s2.length())
            cout << "no" << endl;
        else
        {
            string s3 = s1 + s1;
            if (s3.find(s2) != string::npos)
                cout << "yes" << endl;
            else
                cout << "no" << endl;
        }

    }
}