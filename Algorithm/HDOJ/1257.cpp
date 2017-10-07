#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n, arr[1000] = {};
    while (cin >> n)
    {
        int a,count=0;
        cin >> a;
        arr[0] = a;
        count++;
        for (int i = 1; i < n; i++)
        {
            int flag = 0;
            cin >> a;
            for (int j = 0; j < count; j++)
            {
                if (a < arr[j])
                {
                    arr[j] = a;
                    flag = 1;
                    break;
                }
            }
                if (!flag)
                    arr[count++] = a;
                sort(arr, arr + count);
        }
        cout << count << endl;
        
    }
}