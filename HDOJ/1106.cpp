#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int a[1001];
char s[1001];
char *temp;
int main() {
    while (gets(s)) 
    {
        int i, j;
        a[0] = atoi(strtok(s, "5"));
        j = 1;
        while (temp = strtok(NULL, "5"))
            a[j++] = atoi(temp);
        sort(a, a + j);
        for (i = 0; i<j; i++)
            printf(i == j - 1 ? "%d\n" : "%d ", a[i]);
    }
    return 0;
}