#include<iostream>
    #include<iomanip>
    using namespace std;
    int main()
    {
        int m;
        while(cin >>m)
            while (m--)
            {
                int n,sum,min_sum=INT_MAX,min=0;
                cin >> n;
                int arr[500];
                for (int i = 0; i < n; i++)
                    cin >> arr[i];
                for (int i = 0; i < n; i++)
                {
                    sum = 0;
                    for (int j = 0; j < n; j++)
                        sum += abs(arr[i] - arr[j]);
                    if (sum < min_sum)
                        min_sum = sum;
                        
                }
                cout << min_sum << endl;

            }
    }