#include <bits/stdc++.h>
using namespace std;

int par[101];
void makeset(int element)
{
    par[element]=element;
}
int find_rep(int r);
void Union(int a,int b)
{
    int u,v;
    u = find_rep(a);
    v = find_rep(b);
    if(u!=v)
    {
        par[u]=v;
    }
}

int find_rep(int r) /// find representitive.
{
    if(par[r]==r) return r;
    else
    {
        return par[r]=find_rep(par[r]);
    }
}

int main()
{
    int N, M, v1, v2;
    cin >> N >> M;

    for(int i = 1; i <= N; i++)
        makeset(i);
            
    for(int i = 1; i <= M; i++)
    {
        cin >> v1 >> v2;
        Union(v1, v2);
    }
    
    int cnt = 0;
    for(int p = 1; p <= N; p++)
    {
        if(par[p]==p)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}

