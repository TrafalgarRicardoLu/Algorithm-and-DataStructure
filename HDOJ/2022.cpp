#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int m,n;
    int arr[100][100]={0};
    while(cin >> m >> n)
    {
        int max =0;
        int max_M,max_N;
        for(int i = 0;i < m;i++)
            for(int j =0;j < n;j++)
        {
            cin >> arr[i][j];
            if(abs(arr[i][j]) > max)
            {
                max_M = i+1;
                max_N = j+1;
                max =abs( arr[i][j]);
            }
        }
        cout << max_M << " " << max_N <<" "<<arr[max_M-1][max_N-1] <<endl;

    }
    return 0;
}