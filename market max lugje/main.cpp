#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,d;
    char hh[3],mm[2];
    cin >> n;
    priority_queue<pair<int,char> > pq;
    for (int i=0;i<n;i++){
        cin >> hh[0] >> hh[1] >> hh[2] >> mm[0] >> mm[1] >> d;
        int od=((hh[0]-'0')*10+hh[1]-'0')*60+(mm[0]-'0')*10+mm[1]-'0';
        pq.push({-od,'+'});
        pq.push({-(od+d),'-'});
    }
    int momentalno=0,najmnogu=0;
    while (!pq.empty()){
        int vreme=-pq.top().first;
        char vlez_izlez=pq.top().second;
        pq.pop();
        if (vlez_izlez=='+'){
            momentalno++;
            najmnogu=max(najmnogu,momentalno);
        }
        else momentalno--;
    }
    cout << najmnogu;

    return 0;
}
