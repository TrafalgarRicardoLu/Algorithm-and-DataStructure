#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    while(cin >> s)
    {
        int max =0;
        int maxi =0;
        int arr[100]={};
        for(int i = 0;i < s.length();i++)
        {
            if(s[i] > max)
                max = s[i];
        }
        for(int i = 0;i < s.length();i++)
        {
            if(s[i] == max)
                arr[i] = 1;
        }
        for(int i = 0; i <s.length();i++)
           {
              cout << s[i];
              if(arr[i] == 1)
                cout << "(max)";
           }
        cout <<endl;
    }

}