#include <bits/stdc++.h>

using namespace std;

string najcest_substr;
int najmnogu_pojav=0;
map<string,int> m;

void najdi_nov_najcest(string p){
    if (m[p]>najmnogu_pojav){
        najmnogu_pojav=m[p];
        najcest_substr=p;
    }
    else if (m[p]==najmnogu_pojav&&p.size()>najcest_substr.size())
        najcest_substr=p;
    else if (m[p]==najmnogu_pojav&&p.size()==najcest_substr.size()&&p<najcest_substr)
        najcest_substr=p;
}

int main()
{
    string s;
    cin >> s;
    for (int i=0;i<s.size();i++){
        string p="";
        p+=s[i];
        m[p]++;
        najdi_nov_najcest(p);
        for (int j=i+1;j<s.size();j++){
            p+=s[j];
            m[p]++;
            najdi_nov_najcest(p);
        }
    }
    cout << najcest_substr << endl;

    return 0;
}
