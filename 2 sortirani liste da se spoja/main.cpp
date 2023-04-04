#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<int> l1,l2,l3;
    int n,m,a;
    cin >> n;
    for (int i=0;i<n;i++)
        cin >> a,l1.push_back(a);
    cin >> m;
    for (int i=0;i<m;i++)
        cin >> a,l2.push_back(a);
    auto it1=l1.begin(),it2=l2.begin();
    while (it1!=l1.end()&&it2!=l2.end()){
        if (*it1<=*it2)
            l3.push_back(*it1),it1++;
        else
            l3.push_back(*it2),it2++;
    }
    while (it1!=l1.end())
        l3.push_back(*it1),it1++;
    while (it2!=l2.end())
        l3.push_back(*it2),it2++;
    for (auto i:l3)
        cout << i << " ";

    return 0;
}

