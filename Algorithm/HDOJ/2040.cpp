using namespace std;
int main()
{
    int n, m;
    int a;
    while (cin >> a)
    {
        while (a--)
        {
            cin >> n >> m;
            int sum = 0, sum1 = 0;;
            for (int i = 1; i <= n / 2; i++)
                if (n%i == 0)
                    sum += i;
            for (int i = 1; i <= m / 2; i++)
                if (m%i == 0)
                    sum1 += i;
            if (sum == m&&sum1 == n)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}