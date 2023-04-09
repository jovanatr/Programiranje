#include <bits/stdc++.h>

using namespace std;

int n,m,poc,kraj;
vector<int> G[10001];
vector<int> rez;
bool poseteni[10001];

void dfs(int teme,vector<int> pat){
    if (poseteni[teme])
        return;
    poseteni[teme]=1;
    pat.push_back(teme);
    if (teme==kraj){
        rez=pat;
        return;
    }
    for (int i=0;i<G[teme].size();i++)
        dfs(G[teme][i],pat);
    pat.pop_back();
}

int main()
{
    int a,b;
    cin >> n >> m >> poc >> kraj;
    for (int i=0;i<m;i++){
        cin >> a >> b;
        G[a].push_back(b);
    }
    vector<int> pat;
    dfs(poc,pat);
    for (int i=0;i<rez.size();i++)
        cout << rez[i] << " ";
    if (rez.size()==0)
        cout << "Nema pat od " << poc << " do " << kraj;

    return 0;
}
