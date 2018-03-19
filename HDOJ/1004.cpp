#include <cstdlib>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[])
{
    int a;
    while(cin>>a)
    {
      if(a==0)
        break;
      string s[1000];
      int i,j,n,max;
      int x[1000]={};
      for(i=0;i<a;i++)
        cin>>s[i];
      for(i=0;i<a;i++)
      {
        for(j=0;j<a;j++)
        {
          if(s[i]==s[j])
            x[i]++;
        }
      }
      max=0;
      for(i=0;i<a;i++)
      {
        if(x[i]>x[max])
          max=i;
      }
      cout<<s[max]<<endl;
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
