#include <bits/stdc++.h>

#define forr(i, a, b) for(int i = (int) a; i < (int) b; i++)
#define forn(i, n) forr(i, 0, n)
#define pb push_back
#define fst find
#define snd second

typedef long long ll;
typedef long double ld;

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,cant=0,pos=1;
    bool flag = false;
    cin >> n;
    ll personas[n];
    for (int i = 0; i < n; i++) {
        cin >> personas[i];
    }
    while (flag == false) {
        pos = 1;
        for(auto x : personas) {
            if (x - cant <= 0) {
                cant = cant + 1;
                flag = true;
                break;
            }
            else{
                pos = pos + 1;
                cant = cant + 1;
            }
        }
    }
    cout << pos << "\n";
}