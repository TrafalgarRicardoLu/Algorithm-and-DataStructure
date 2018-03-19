#include <iostream>
using namespace std;
int main ()
{
        int a;

        while ( cin >> a)
        {
                long long sum = 0;
                for ( int i = 1; i <= a ; i++ )
                {
                        sum += i;
                }
                cout << sum << endl << endl;
        }


        return 0;
}
