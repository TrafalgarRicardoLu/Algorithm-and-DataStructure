#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;
int arr[110000][20];
int main()
{
    int t;
    while (scanf("%d",&t)!=EOF&&t)
    {
        memset(arr,0,sizeof(arr));
        int n,m,ma=0,maxn=0;
        for(int i=0;i<t;i++)
        {
            scanf("%d %d",&n,&m);
            arr[m][n]++;
            maxn=max(maxn,m);
        }
        for(int i=maxn-1;i>=0;i--)
             for(int j=0;j<=10;j++)
                 arr[i][j]+=max(arr[i+1][j],max(arr[i+1][j-1],arr[i+1][j+1]));

        cout << arr[0][5]<<endl;
    }

}