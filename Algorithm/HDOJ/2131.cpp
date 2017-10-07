#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    char arr[200], key;
    while (cin >> key >> arr)
    {
        int count = 0;
        for (int i = 0; i < strlen(arr); i++)
            if (arr[i] == key || arr[i]+32==key || arr[i]==key+32)
                count++;
        cout <<fixed<<setprecision(5)<< 1.0*count / strlen(arr) << endl;
    }
}