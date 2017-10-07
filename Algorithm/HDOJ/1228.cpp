#include<iostream>
#include<algorithm>
#include<sstream>
#include<string>
using namespace std;
int arr[200000];
string brr[10] = { "zero","one","two","three","four","five","six","seven","eight","nine" };
int find(string t)
{
    if (t == "+" || t == "=")
        return 0;
    for (int i = 0; i < 10; i++)
        if (t == brr[i])
            return i;
}
int main()
{
    std::ios::sync_with_stdio(false);
    string s,temp;
    while (getline(cin, s))
    {
        if (s == "zero + zero =") return 0;
        int sum1 = 0, sum2 = 0, flag = 0;
        stringstream ss(s);
        while (ss >> temp)
        {
            if (temp == "=")
                break;
            if (temp == "+")
            {
                flag = 1;
                continue;
            }
            if (flag)
                sum2 = sum2 * 10 + find(temp);
            else
                sum1 = sum1 * 10 + find(temp);
        }
        cout << sum2 + sum1 << endl;
    }
}