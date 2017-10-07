#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    int P,S;
    double arr[51][6];
    while(cin >> P >> S)
    {
        double sum_p[51]={};
        double sum_s[6] ={};
        for(int i = 0;i < P;i++)
            for(int j = 0;j < S;j++)
        {
            cin >> arr[i][j];
            sum_p[i] += arr[i][j];
            sum_s[j] += arr[i][j];
        }
        for(int i = 0 ;i < P-1;i++)
            cout <<fixed<<setprecision(2)<< sum_p[i] /S <<" ";
        cout <<fixed<<setprecision(2)<< sum_p[P-1] /S<<endl;
        for(int i = 0;i < S-1;i++)
            cout <<fixed<<setprecision(2)<< sum_s[i] /P <<" ";
        cout <<fixed<<setprecision(2)<< sum_s[S-1] /P<<endl;
        int sum =0;
        for(int i = 0;i < P;i++)
         {
             int count = 0;
             for(int j = 0;j < S;j++)
            {
                if(arr[i][j] >= sum_s[j]/P )
                    count++;
            }
            if(count == S)
                sum++;
         }
         cout << sum <<endl<<endl;

    }
}