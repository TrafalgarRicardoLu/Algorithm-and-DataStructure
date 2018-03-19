#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    char arr[100];
    while(gets(arr))
    {
        for(int i =0;i <strlen(arr);i++)
        {
            if(i == 0)
                arr[0] = arr[0] -32;
            if(arr[i] == ' ')
                arr[i+1] = arr[i+1]-32;
        }
        for(int i = 0; i <strlen(arr);i++)
        {
             cout << arr[i];
        }
        cout <<endl;
    }

}