#include<iostream>
using namespace std;
int main()
{    
    int a;
    while (cin >> a)
    {
        if (a >= 90 && a <= 100)
            cout << "A" << endl;
        else if (a >= 80 && a <= 89)
            cout << "B" << endl;
        else if (a >= 70 && a <= 79)
            cout << "C" << endl;
        else if (a >= 60 && a <= 69)
            cout << "D" << endl;
        else if (a >= 0 && a <= 59)
            cout << "E" << endl;
        else
            cout << "Score is error!" << endl;

    }
}