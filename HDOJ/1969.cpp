#include <cmath>
#include <iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
const double  Pi = acos(-1.0);

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        double Max=0.0,Min=0.0,R,mid,arr[10005];
        int m,f,count=0;
        cin >> m >> f;
        for (int i = 0; i < m; i++)
        {
            cin >> R;
            arr[i] = Pi*R*R;
            Max = max(arr[i], Max);
        }
        while (Max-Min>=1e-7)
        {
            mid = (Max + Min) / 2;
            count = 0;
            for (int i = 0; i < m; i++)
                count += (int)(arr[i] / mid);
            if (count >= f+1)
                Min = mid;
            else
                Max = mid;
        }
        printf("%.4lf\n", mid);
    }
    return 0;
}