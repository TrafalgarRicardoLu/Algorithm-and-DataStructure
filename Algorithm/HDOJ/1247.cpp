#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<string.h>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
char input[50005][1000];
struct trie
{
    struct trie *next[26];
    bool value;
    trie() {
        for (int i = 0; i<26; i++)
            next[i] = NULL;
        value = false;
    }
};
void insert(char s[], trie &root)
{
    trie *p = &root;
    int k = 0;
    while (s[k] != '\0')
    {
        if (p->next[s[k] - 'a'] == NULL)
        {
            p->next[s[k] - 'a'] = (trie *)malloc(sizeof(trie));
            p = p->next[s[k] - 'a'];
            p->value = false;
            for (int i = 0; i<26; i++)
                p->next[i] = NULL;
        }
        else
            p = p->next[s[k] - 'a'];
        k++;
    }
    p->value = true;
}
bool find(char s[], trie &root)
{
    trie *p = &root;
    int k = 0;
    while (s[k] != '\0')
    {
        if (!p->next[s[k] - 'a'])  return false;
        p = p->next[s[k] - 'a'];
        k++;
    }
    return p->value;

}
int main()
{

    trie root;
    char s1[1000], s2[1000];
    int len = 0;
    while (~scanf("%s", input[len++]))
        insert(input[len - 1], root);
    for (int i = 0; i<len; i++)
    {
        int l = strlen(input[i]);
        for (int j = 1; j <= l - 1; j++)
        {
            int u1 = 0, u2 = 0;
            for (int k = 0; k<j; k++)
                s1[u1++] = input[i][k];
            s1[u1] = '\0';
            for (int k = j; k<l; k++)
                s2[u2++] = input[i][k];
            s2[u2] = '\0';
            if (find(s1, root) && find(s2, root))
            {
                puts(input[i]);
                break;
            }
        }
    }
}