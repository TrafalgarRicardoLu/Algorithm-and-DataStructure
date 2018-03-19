#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin >> n >> m;
        if (n % (m + 1)==0)
            cout << "Rabbit" << endl;
        else
            cout << "Grass" << endl;
    }
}