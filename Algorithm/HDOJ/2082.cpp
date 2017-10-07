#include <iostream>  
#include <cstring>  
#include<algorithm>
using namespace std;
int N, n[26], v[26], a[51], b[51], i, j, k, last, last2, sum;
int main()
{
    cin >> N;
    while (N--)
    {
        for (i = 0; i<26; i++)
        {
            cin >> n[i];
            v[i] = i + 1;
        }
        a[0] = 1;
        last = 0;
        for (i = 0; i<26; i++)
        {
            last2 = min(last + n[i] * v[i], 50);
            memset(b, 0, sizeof(int)*(last2 + 1));
            for (j = 0; j <= n[i] && j*v[i] <= last2; j++)
                for (k = 0; k <= last&&k + j*v[i] <= last2; k++)
                    b[k + j*v[i]] += a[k];
            memcpy(a, b, sizeof(int)*(last2 + 1));
            last = last2;
        }
        sum = 0;
        for (i = 1; i <= 50; i++)
            if (a[i]) sum += a[i];
        cout << sum << endl;
    }
    return 0;
}