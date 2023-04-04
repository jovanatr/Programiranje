#include <bits/stdc++.h>

using namespace std;

int main()
{
    char a;
    stack<int> s;
    while (1){
        cin >> a;
        if (isdigit(a)){
            s.push(a-'0');
        }
        else {
            if (a=='=')
                break;
            if (a=='+'){
                int br=0;
                br+=s.top();
                s.pop();
                br+=s.top();
                s.pop();
                s.push(br);
            }
            else if (a=='-'){
                int br=0;
                br-=s.top();
                s.pop();
                br-=s.top();
                s.pop();
                s.push(br);
            }
            else {
                int br=1;
                br*=s.top();
                s.pop();
                br*=s.top();
                s.pop();
                s.push(br);
            }
        }
    }
    cout << s.top();

    return 0;
}

