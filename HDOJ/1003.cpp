#include<iostream>
using namespace std;
int arr[100001], dp[100001];
int main() {
	int T, n, i = 1;
	cin >> T;
	while (T--) {
		cin >> n;
		for (int i = 0; i<n; i++)
			cin >> arr[i];
		dp[0] = arr[0];
		int start = 0, endd = 0, maxx = -1001;
		int first = 0, second = 0;
		for (int i = 0; i<n; i++) {
			if (dp[i - 1] >= 0) {
				dp[i] = dp[i - 1] + arr[i]; endd = i;
			}
			else {
				dp[i] = arr[i]; start = endd = i;
			}
			if (maxx <= dp[i]) {
				maxx = dp[i]; first = start; second = endd;
			}
		}
		cout << "Case " << i++ << ":" << endl << maxx << " " << first + 1 << " " << second + 1 << endl;
		if (T != 0)
			cout << endl;
	}
}
