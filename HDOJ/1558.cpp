#include<stdio.h>  
#include<iostream>  
#include<string.h>  
using namespace std;  
struct point  
{  
    double x,y;  
}b[5];  
struct xianduan  
{  
    double x1,x2,y1,y2;  
}a[10000];  
int f[10000];  
int sum[10000];  
int find(int x)  
{  
    return f[x] == x ? x : (f[x] = find(f[x]));  
}  
void merge(int a,int b)  
{  
    int A,B;  
    A=find(a);  
    B=find(b);  
    if(A!=B)  
    {  
        f[B]=A;  
        sum[A]+=sum[B];  
    }  
}  
double multi(point p1,point p2,point p0)  
{  
    return((p1.x-p0.x)*(p2.y-p0.y)-(p2.x-p0.x)*(p1.y-p0.y));  
}  
  
bool IsIntersected(point s1,point e1,point s2,point e2)//两个线段相交  
{  
    return(max(s1.x,e1.x)>=min(s2.x,e2.x))&&  
           (max(s2.x,e2.x)>=min(s1.x,e1.x))&&  
           (max(s1.y,e1.y)>=min(s2.y,e2.y))&&  
           (max(s2.y,e2.y)>=min(s1.y,e1.y))&&  
           (multi(s1,s2,e1)*multi(s1,e1,e2)>=0)&&  
           (multi(s2,s1,e2)*multi(s2,e2,e1)>=0);  
}  
int main()  
{  
    int t;  
    scanf("%d",&t);  
    int kase=0;  
    while(t--)  
    {  
        if(kase)  
        printf("\n");  
        for(int i=0;i<10000;i++)  
        {  
            f[i]=i;sum[i]=1;  
        }  
        int q;  
        scanf("%d",&q);  
        int cont=0;  
        while(q--)  
        {  
            char s[5];  
            scanf("%s ",s);  
            if(s[0]=='P')  
            {  
                scanf("%lf%lf%lf%lf",&a[cont].x1,&a[cont].y1,&a[cont].x2,&a[cont].y2);  
                b[0].x=a[cont].x1;b[0].y=a[cont].y1;b[1].x=a[cont].x2;b[1].y=a[cont].y2;  
                for(int i=0;i<cont;i++)  
                {  
                    b[2].x=a[i].x1;b[2].y=a[i].y1;  
                    b[3].x=a[i].x2;b[3].y=a[i].y2;  
                    if(IsIntersected(b[0],b[1],b[2],b[3]))  
                    {  
                        merge(i,cont);  
                    }  
                }  
                cont++;  
            }  
            if(s[0]=='Q')  
            {  
                int k;  
                scanf("%d",&k);  
                k--;  
                printf("%d\n",sum[find(k)]);  
            }  
        }  
        kase++;  
    }  
}  