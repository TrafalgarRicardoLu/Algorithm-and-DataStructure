#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool cmp(string a, string b)
{
    return a.length() < b.length();
}
int main()
{
    string s[100];
    int count = 0,flag=0,Case=1;
    while (cin >> s[count++])
    {
        if (s[count - 1][0] == '9')
        {
            if(!flag)
                cout << "Set " << Case++ << " is immediately decodable" << endl;
            else
                cout << "Set " << Case++ << " is not immediately decodable" << endl;
            for (int i = 0; i < count; i++)
                s[i].clear();
            count = 0;
            flag = 0;
        }
        else
        {
            sort(s, s + count, cmp);
            for (int i = 0; i < count; i++)
                for (int j = 0; j < i; j++)
                    if (s[i].find(s[j]) == 0)
                    {
                        flag = 1;
                        break;
                    }
        }
    }
}