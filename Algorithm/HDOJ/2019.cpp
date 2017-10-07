#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int m,n;
    int arr[100]={0};
    while(cin >> m >> n && m && n)
    {
        for(int i = 0;i <m;i++)
            cin  >> arr[i];
        arr[m] = n;
        sort(arr,arr+m+1);
        for(int i = 0; i < m ;i++)
            cout << arr[i] <<" ";
        cout << arr[m] <<endl;
    }
}