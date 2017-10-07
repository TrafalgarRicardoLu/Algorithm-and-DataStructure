#include<iostream>
using namespace std;
int main()
{
    int n;
    int number;
    int arr[1001];
    while((cin >> n) && n != 0)
    {
            int count = 0;
        
            for (int i = 0; i < n; i++)
                cin >> arr[i];
            cin >> number;
            for (int j = 0; j < n; j++)
                if (arr[j] == number) count++;
            cout << count <<endl;
        
    }
}