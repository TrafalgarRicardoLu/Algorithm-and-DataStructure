#include <iostream>
#include <cmath>
using namespace std;
char table[1001][1000] = { 0 };
void BigNumAdd()
{
    table[1][0] = 1;
    table[2][0] = 2;
    table[3][0] = 4;
    table[4][0] = 7;

    for (int i = 5; i <= 1000; i++)
    {
        int temp = 0;
        for (int j = 0; j < 1000; j++)
        {
            temp = table[i - 1][j] + table[i - 2][j] + table[i - 4][j] + temp;
            table[i][j] = temp % 10;
            temp = temp / 10;
        }
    }
}
int main()
{

    int N = 0;
    int wei = 999;
    BigNumAdd();
    while (scanf("%d", &N) != EOF)
    {
        wei = 999;
        while (table[N][wei] == 0)
            wei--;
        while (wei >= 0)
        {
            printf("%d", table[N][wei]);
            wei--;
        }
        printf("\n");
    }
    return 0;
}