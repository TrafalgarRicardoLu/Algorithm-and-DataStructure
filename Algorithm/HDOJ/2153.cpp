#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    int a[100][100],n,x,y,s,i,j;
    while(cin>>n,n)
    {

        memset(a,0,sizeof(a));
        x=y=s=0;
        if(n==1)
        {
            printf("  1\n");continue;
        }
        while(y<n-1) a[x][y++]=++s;
        while(x<n-1) a[x++][y]=++s;
        while(y>0) a[x][y--]=++s;
        while(!a[1][0]) a[x--][y]=++s;

    for(i=0;i<n;i++)
    {

        for(j=0;j<n;j++)
    {
          if(!a[i][j]) printf("   ");
        else
            printf("%3d",a[i][j]);
    }
    cout<<endl;
    }

    }

    return 0;
}