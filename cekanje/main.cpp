#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string ime[n];
    bool licna[n],pasos[n],vozacka[n];
    for (int i=0;i<n;i++){
        cin >> ime[i];
        cin >> licna[i] >> pasos[i] >> vozacka[i];
    }
    queue<int> q1,q2,q3;
    for (int i=0;i<n;i++){
        if (licna[i]==1)
            q1.push(i);
        else if (pasos[i])
            q2.push(i);
        else if (vozacka[i])
            q3.push(i);
    }
    while (!q1.empty()){
        int index=q1.front();
        q1.pop();
        if (pasos[index])
            q2.push(index);
        else if (vozacka[index])
            q3.push(index);
        else cout << ime[index] << endl;
    }
    while (!q2.empty()){
        int index=q2.front();
        q2.pop();
        if (vozacka[index])
            q3.push(index);
        else cout << ime[index] << endl;
    }
    while (!q3.empty()){
        int index=q3.front();
        q3.pop();
        cout << ime[index] << endl;
    }

    return 0;
}
