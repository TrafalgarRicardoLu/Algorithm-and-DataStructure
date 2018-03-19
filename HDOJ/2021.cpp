#include<iostream>
using namespace std;
int main(void)
{
    int i,n,a[100],num;
    while(cin>>n&&n)
    {
        num=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            num+=a[i]/100+a[i]%100/50+a[i]%100%50/10+a[i]%100%50%10/5+a[i]%100%50%10%5/2+a[i]%100%50%10%5%2;
        }
        cout<<num<<endl;
    }
}