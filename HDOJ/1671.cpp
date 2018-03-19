#include <string>
#include <cstring>
#include <cstdlib>
#include <iostream>
using namespace std;
const int MAX = 10;
struct Trie
{
    Trie *next[MAX];
    int v;   
};
Trie *root;
void createTrie(char *str)
{
    int len = strlen(str);
    Trie *p = root, *pnew;
    for (int i = 0; i<len; ++i)
    {
        int id = str[i] - '0';
        if (p->next[id] == NULL)
        {
            pnew = (Trie *)malloc(sizeof(Trie));
            pnew->v = 1;   
            for (int j = 0; j<MAX; ++j)
                pnew->next[j] = NULL;
            p->next[id] = pnew;
            p = p->next[id];
        }
        else
        {
            p->next[id]->v++;
            p = p->next[id];
        }
    }
    p->v = -1;  
}

int findTrie(char *str)
{
    int len = strlen(str);
    Trie *p = root;
    for (int i = 0; i<len; ++i)
    {
        int id = str[i] - '0';
        p = p->next[id];
        if (p == NULL)  
            return 0;
        if (p->v == -1)  
            return -1;
    }
    return -1; 
}
int deal(Trie* T)
{
    int i;
    if (T == NULL)
        return 0;
    for (i = 0; i<10; i++)
    {
        if (T->next[i] != NULL)
            deal(T->next[i]);
    }
    free(T);
    return 0;
}
int main()
{
    int t, n;
    char str[11];
    cin >> t;
    while (t--)
    {
        int flag = 0;
        root = (Trie *)malloc(sizeof(Trie));
        for (int i = 0; i<10; ++i)
            root->next[i] = NULL;
        cin >> n;
        for (int i = 0; i<n; ++i)
        {
            cin >> str;
            if (findTrie(str) == -1)
                flag = 1;
            if (flag)
                continue;
            createTrie(str);
        }
        if (flag)
            printf("NO\n");
        else
            printf("YES\n");
        deal(root);
    }
    return 0;
}