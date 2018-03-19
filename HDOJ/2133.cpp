#include <iostream>
#include <algorithm>
#include<string>
using namespace std;
const int month_day[2][13] = {{ 0,31,28,31,30,31,30,31,31,30,31,30,31 },{ 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }};
string date[8] = { "Sunday" , "Monday" , "Tuesday" , "Wednesday" , "Thursday" , "Friday" , "Saturday" };
int run(int year)
{
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        return 1;
    return 0;
}
int main()
{
    int year, month, day;
    while (cin >> year >> month >> day)
    {
        if ((run(year) == 0 && month == 2 && day == 29) || month > 12 || day > month_day[run(year)][month] || month == 0 || day == 0 || year == 0)
        {
            cout << "illegal" << endl;
            continue;
        }
        int sum_run = (year-1) / 4 - (year-1) / 100 + (year-1) / 400;
        long sum = 0;
        for (int i = 0; i < month; i++)
            sum += month_day[run(year)][i];
        sum += day+sum_run*366+(year-sum_run-1)*365;
        cout << date[sum % 7] << endl;
    }
}