#include <iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int count=0;
        for(int i=0;i*50<=n;i++)
            for(int j =0;j*25<=n;j++)
                for(int z=0;z*10<=n;z++)
                    for(int x=0;x*5<=n;x++)
                        if((i*50+j*25+z*10+x*5<=n)&&(i+j+z+x+n-i*50-j*25-z*10-x*5<=100))
                            count++;
        cout << count <<endl;
    }
    return 0;
}
