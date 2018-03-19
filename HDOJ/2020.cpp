#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int m;
    double arr[100]={0};
    while(cin >> m && m)
    {
        for(int i = 0;i <m;i++)
            cin  >> arr[i];

        for(int i = 0; i < m;i++)
            for(int j =0;j <m-i;j++)
            {
                if(fabs(arr[j])<fabs(arr[j+1]))
                {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        for(int i = 0;i < m-1;i++)
            cout << arr[i] <<" ";
        cout << arr[m-1] <<endl;
    }
}