#include<stdio.h>
#include<algorithm>
using namespace std;
int set[110];
struct line
{
    int start;
    int end;
    int money;
}num[1010];
bool cmp(line a, line b)
{
    return a.money<b.money;
}
int find(int p)
{
    int child = p;
    int t;
    while (p != set[p])
        p = set[p];
    while (child != p)
    {
        t = set[child];
        set[child] = p;
        child = t;
    }
    return p;
}
void merge(int x, int y)
{
    int fx = find(x);
    int fy = find(y);
    if (fx != fy)
        set[fx] = fy;
}
int main()
{
    int road, city, need;
    int exist;
    while (cin >>road>>cityroad)
    {
        for (int i = 1; i <= city; i++)
            set[i] = i;
        for (int i = 1; i <= road; i++)
            cin >>num[i].start>>num[i].end>>num[i].money;
        sort(num + 1, num + road + 1, cmp);
        need = 0;
        for (int i = 1; i <= road; i++)
        {
            if (find(num[i].start) != find(num[i].end))
            {
                merge(num[i].start, num[i].end);
                need += num[i].money;
            }
        }
        exist = 0;
        for (int i = 1; i <= city; i++)
            if (set[i] == i)
                exist++;
        if (exist>1)
            cout << "?"<<endl;
        else
            cout <<need<<endl;
    }
    return 0;
}