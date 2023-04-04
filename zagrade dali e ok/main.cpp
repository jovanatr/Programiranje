#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    stack<char> st;
    for (int i=0;i<s.size();i++){
        if (s[i]=='{'||s[i]=='('||s[i]=='[')
            st.push(s[i]);
        else if (s[i]=='}'||s[i]==')'||s[i]==']'){
            if (st.empty()){
                //cout << i << endl;
                cout << "Zagradite ne se korektni";
                return 0;
            }
            int posl=st.top();
            if (s[i]=='}'&&posl=='{')
                st.pop();
            else if (s[i]==')'&&posl=='(')
                st.pop();
            else if (s[i]==']'&&posl=='[')
                st.pop();
            else {
                //cout << i << endl;
                cout << "Zagradite ne se korektni";
                return 0;
            }
        }
    }
    if (!st.empty()){
        cout << "Zagradite ne se korektni";
        return 0;
    }
    cout << "Zagradite se korektni";

    return 0;
}
