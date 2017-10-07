#include<iostream>
using namespace std;
int main()
{
	int n;
	int arr[100];
	while (cin >> n)
	{
		int sum = 0;
		if (n == 0)
			break;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			if (i == 0) 
				sum += arr[i] * 6 + 5;
			else  if (arr[i]>arr[i - 1])
				sum += (arr[i] - arr[i - 1]) * 6 + 5;
			else  
				sum += (arr[i - 1] - arr[i]) * 4 + 5;
		}
		cout << sum << endl;
	}
	return 0;

}
