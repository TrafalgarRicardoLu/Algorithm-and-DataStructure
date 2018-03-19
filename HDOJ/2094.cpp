#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    int t;
    while (cin >> t&& t)
    {
        map<string, int> a;
        string b;
        for (int i = 0; i < t; i++)
        {
            cin >> b; 
            if(!a.count(b))
                a[b] = 1; 
            cin >> b;
            a[b] = 0;
        }
        int flag = 0;
        map<string, int>::iterator it;
        for (it = a.begin(); it != a.end(); ++it)
            if (it->second== 1)
                flag++;
        
        if (flag==1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

}