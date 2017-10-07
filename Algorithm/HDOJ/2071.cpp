#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n, m;double num;
    while(cin >>n)
        while (n--)
        {
            cin >> m;
            double max = 0;
            for(int i=0;i<m;i++)
            {    cin >> num;
                if (num >= max)
                    max = num;
            }
            cout <<fixed<<setprecision(2)<< max << endl;
        }
}