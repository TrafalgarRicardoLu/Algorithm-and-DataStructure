#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double n,m;
    while(cin>>n>>m&&n&&m)
   {
        int v,i;
        v=ceil(1.0*n/m);
        for(i=1;;i++)
         if(i*(i+1)/2>=v)
           break;
        v=v+i-1;
        cout<<v<<endl;
    }
}