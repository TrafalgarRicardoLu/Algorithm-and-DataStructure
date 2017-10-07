#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
int year,moon,day;
int month[12] = {0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
while(scanf("%d/%d/%d",&year,&moon,&day)!=EOF)
{
int sum=0;

for(int i=0;i<=moon-1;i++)
{
sum=sum+month[i];
}
sum=sum+day;
if((year%4==0&&year%100!=0)||(year%400==0))
{if(moon>2)sum=sum+1;}
printf("%d\n",sum);
}
return 0;
}