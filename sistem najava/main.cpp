#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<string,string> m;
    int n;
    cin >> n;
    string korisnicko_ime,lozinka;
    for (int i=0;i<n;i++){
        cin >> korisnicko_ime >> lozinka;
        m[korisnicko_ime]=lozinka;
    }
    while (1){
        cin >> korisnicko_ime;
        if (korisnicko_ime=="KRAJ") break;
        cin >> lozinka;
        while (m[korisnicko_ime]!=lozinka){
            cout << "Nenajaven" << endl;
            cin >> lozinka;
        }
        cout << "Najaven" << endl;
    }

    return 0;
}

