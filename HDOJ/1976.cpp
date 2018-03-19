#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a1, a2, b1, b2, c1, c2 , flag=0;
        cin >> a1 >> b1 >> c1;
        cin >> a2 >> b2 >> c2;
        if (a1 == a2 && b1 == b2 && c1 == c2)
        {
            cout << "Same" << endl; 
            continue;
        }
        if (a1 > a2)
            flag = 1;
        else if (a1 == a2)
            if (b1 > b2)
                flag = 1;
            else if (b1 == b2)
                if (c1 > c2)
                    flag = 1;
        if (flag)
            cout << "First" << endl;
        else
            cout << "Second" << endl;
    }
}