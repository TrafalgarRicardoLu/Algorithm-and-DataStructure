#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		double a, b, sum = 0, sum1 = 0;
		for (int i = 0; i<n; i++)
		{
			cin >> a >> b;
			if (b == -1)
				a = 0;
			if (b<60 && b >= 0)
				b = 0;
			if (b >= 60 && b<70)
				b = 1;
			if (b >= 70 && b<80)
				b = 2;
			if (b >= 80 && b<90)
				b = 3;
			if (b >= 90 && b <= 100)
				b = 4;
			sum += a;
			sum1 += a*b;
		}
		if (sum == 0)
			cout << -1 << endl;
		else
			cout <<fixed<<setprecision(2)<< sum1 / sum << endl;
	}
	return 0;
}