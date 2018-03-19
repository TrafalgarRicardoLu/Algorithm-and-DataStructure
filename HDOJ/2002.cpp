#include<iostream>
#include<cstdio>
#define PI  3.1415927
using namespace std;
int main()
{    
    double r;
    while (cin >> r)
    {
        printf("%.3lf\n",  PI*r*r*r*4/3);
    }

}