#include<stdio.h>  
#include<math.h>  
#include<string.h>  
struct Point  
{  
       int x,y;  
} pt[105];  
double d[105],map[105][105];  
bool v[105];  
int c;  
double Dist(Point a,Point b)  
{  
       return sqrt( (a.x-b.x)*(a.x-b.x)*1.0+(a.y-b.y)*(a.y-b.y) );  
}  
void Graph()  
{  
     int i,j;  
     double t;  
     memset(map,0,sizeof(map));  
     for( i=0; i<c-1; i++){  
          for( j=i+1; j<c; j++){  
               t=Dist(pt[i],pt[j]);  
               if( t>=10&&t<=1000){  
                   map[i][j]=t;  
                   map[j][i]=t;  
               }  
          }  
     }  
}  
double Prim()  
{  
    int i,j,pt;  
    double ret,mim;  
    memset(d,0,sizeof(d));  
    memset(v,false,sizeof(v));  
    pt=0;  v[0]=true;  ret=0;  
    while( true){  
           for( i=0; i<c; i++)   
                if( !v[i]&&map[pt][i]&&(d[i]>map[pt][i]||d[i]==0) )  
                    d[i]=map[pt][i];    
           pt=-1; mim=10000;  
           for( i=0; i<c; i++){  
                if( !v[i]&&d[i]&&mim>d[i] ){  
                    mim=d[i];  
                    pt=i;  
                }  
           }         
           v[pt]=true;  
           if( pt==-1) break;  
          ret+=mim;   
    }  
    for( i=0; i<c; i++)//ÅÐ¶ÏÊÇ·ñÁªÍ¨  
         if( !v[i])  
             return -1;   
    return ret;  
}  
int main()  
{  
    int t,i;  
    double ret;  
    scanf("%d",&t);  
    while( t--){  
           scanf("%d",&c);  
           for( i=0; i<c; i++)  
                  scanf("%d%d",&pt[i].x,&pt[i].y);   
           Graph();  
           ret=Prim();  
           if( ret==-1)  
               printf("oh!\n");  
           else{  
                ret=ret*100;  
                printf("%.1lf\n",ret);  
           }  
    }  
    return 0;  
}  