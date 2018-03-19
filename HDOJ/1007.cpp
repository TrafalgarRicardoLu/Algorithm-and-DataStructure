#include<iostream>
#include<cstdio>
#include<math.h>
#include<algorithm>
using namespace std;
struct Point {
    double x, y;
};
Point a[100001];
int b[100001];
bool cmp_x(Point m, Point n) {
    if (m.x == n.x) return m.y < n.y;
    else return m.x < n.x;
}
bool cmp_y(int m, int n) {
    if (a[m].y == a[n].y) return a[m].x < a[n].x;
    else return a[m].y< a[n].y;
}
double dis(Point m, Point n) {
    return sqrt((m.x - n.x)*(m.x - n.x) + (m.y - n.y)*(m.y - n.y));
}
double solve(int low, int high) {
    int t, mid, k = 0;
    double d1, d2, d3, ldis, rdis, min_d;
    t = high - low;
    mid = (low + high) / 2;
    if (t == 1)
        return dis(a[low], a[high]);
    if (t == 2) {
        d1 = dis(a[low], a[low + 1]);
        d2 = dis(a[low], a[high]);
        d3 = dis(a[low + 1], a[high]);
        return min(d1, min(d2, d3));
    }
    ldis = solve(low, mid);
    rdis = solve(mid + 1, high);
    min_d = min(ldis, rdis);
    for (int i = low;i <= high;i++)
        if (abs(a[mid].x - a[i].x) < min_d)
            b[k++] = i;
    sort(b, b + k, cmp_y);
    for (int j = 0;j < k;j++)
        for (int m = j + 1;m <k && (a[b[m]].y - a[b[j]].y) < min_d;m++)
            if (dis(a[b[j]], a[b[m]]) < min_d)
                min_d = dis(a[b[j]], a[b[m]]);
    return min_d;


}
int main() {
    int n;
    while (scanf("%d", &n) != EOF&&n) {
        for (int i = 0;i < n;i++) {
            scanf("%lf%lf", &a[i].x, &a[i].y);
        }
        sort(a, a + n, cmp_x);
        printf("%.2lf\n", solve(0, n - 1) / 2);
    }
    return 0;
}