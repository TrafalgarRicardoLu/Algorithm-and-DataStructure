#include<iostream>
#include<cstdlib>
#include<string>
#include<sstream>
#include<algorithm>
#include<cmath>
#include<cstdio>
using namespace std;
struct student {
    string name;
    int score[13];
    int error[13];
    int num;
    int total_score;
};
bool compareNum(student, student);
void compute(student&);
int n, m;
int main() {
    cin >> n >> m;
    student s[10000];
    int count = 0;
    while (cin >> s[count].name) 
    {
        string str;
        getline(cin, str);
        stringstream ss;
        ss << str;
        string temp[10000] = {};
        for (int i = 0; i < n; i++)
        {
            ss >> temp[i];
            if (temp[i].find('(') == string::npos)
                s[count].score[i] = atoi(temp[i].c_str());
            else 
            {
                stringstream t;
                t << temp[i];
                t >> s[count].score[i];
                t.get();
                t >> s[count].error[i];
            }
        }
        count++;
    }
    for (int i = 0; i<count; i++)
        compute(s[i]);
    sort(s, s + n, compareNum);
    for (int i = 0; i < count; i++)
        printf("%-10s %2d %4d\n", s[i].name.c_str(), s[i].num, s[i].total_score);
    return 0;
}
void compute(student& s) {
    s.num = 0;
    s.total_score = 0;
    for (int i = 0; i<12; i++) {
        if (s.score[i]>0) {
            s.num++;
            s.total_score += s.score[i];
        }
        s.total_score += (abs(s.error[i])*m);
    }

}
bool compareNum(student a, student b) {
    if (a.num != b.num)
        return (a.num>b.num);
    else 
        return (a.total_score<b.total_score);
}