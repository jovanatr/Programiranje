#include <bits/stdc++.h>

using namespace std;

int main()
{
    //za ednonasocen graf
    int n,m,a,b;
    cin >> n >> m;
    bool povrzani[n+1][n+1];
    memset(povrzani,0,sizeof(povrzani));
    vector<int> G[n+1];
    for (int i=0;i<m;i++){
        cin >> a >> b;
        povrzani[a][b]=1;
        G[a].push_back(b);
    }
    for (int i=0;i<n;i++){
        cout << "Sosedi na temeto " << i << " se:" << endl;
        for (int j=0;j<n;j++){
            if (povrzani[i][j])
                cout << j << " ";
        }
        cout << endl;
    }
    cout << "***************" << endl;
    for (int i=0;i<n;i++){
        cout << "Sosedi na temeto " << i << " se:" << endl;
        for (int j=0;j<G[i].size();j++)
                cout << G[i][j] << " ";
        cout << endl;
    }

    return 0;
}
