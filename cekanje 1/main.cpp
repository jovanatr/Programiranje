#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string ime[n];
    bool licna[n],pasos[n],vozacka[n];
    priority_queue<pair<int,string> > pq;
    //2^2,2^1,2^0
    for (int i=0;i<n;i++){
        cin >> ime[i];
        cin >> licna[i] >> pasos[i] >> vozacka[i];
        int p=4*licna[i]+2*pasos[i]+vozacka[i];
        pq.push({p,ime[i]});
    }
    while (!pq.empty()){
        string s=pq.top().second;
        cout << s << endl;
        pq.pop();
    }

    return 0;
}

