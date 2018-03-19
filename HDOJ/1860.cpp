#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a, n;
    while (getline(cin,n))
    {
        
        int count[5] = {0};
        if (n[0] == '#')
            break;
        else
        {
            getline(cin, a);
            for(int i = 0;i < n.length();i++)
                for (int j = 0; j < a.length(); j++)
                {
                    if (n[i] == a[j])
                        count[i] ++;
                }
            for (int i = 0; i < n.length(); i++)
                cout << n[i] << " " << count[i]<<endl;
        }
        
    }
    return 0;
}