#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double arr[200][200] = {};
    arr[0][0] = 0; arr[0][1] = 1; arr[1][0] = 1 + sqrt(2);
    for (int j = 1; j < 200; j++)
        arr[0][j] = arr[0][j - 1] + sqrt(2)*(j - 1) + sqrt(j*j + (j - 1)*(j - 1));
    for (int i = 1; i < 200; i++)
        arr[i][0] = arr[i - 1][0] + sqrt(2)*i + sqrt(i*i + (i - 1)*(i - 1));
    for (int i = 1; i < 200; i++)
        for (int j = 1; j < 200; j++)
            arr[i][j] = 1.0*sqrt(2)*(i + j) / (i + j) + arr[i - 1][j + 1];
    int n, x1, y1, x2, y2;
    while (cin >> n)
        while (n--)
        {
            cin >> x1 >> y1 >> x2 >> y2;
            cout << fixed << setprecision(3) << abs(arr[x1][y1] - arr[x2][y2]) << endl;
        }
    
}