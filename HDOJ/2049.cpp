#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int i,n,m,t;
    long long sum,z,u;
    long long a[25] = {0,0,1,2};
    for( i = 4; i < 25 ; i ++)
        a[i] = (i-1) * (a[i-1] + a[i-2]);
    
    while(cin >> t ){
        while(t--){
            cin >> n >> m;
            z = 1,u = 1;
            for( i = 0 ; i < m ; i ++){
                z *= (n-i);
                u *=(i+1);
            }
            sum  = z/u * a[m];
            cout << sum << endl;
        }
    }
    return 0;
}
