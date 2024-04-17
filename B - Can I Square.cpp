#include <bits/stdc++.h>

#define forr(i, a, b) for(int i = (int) a; i < (int) b; i++)
#define forn(i, n) forr(i, 0, n)
#define pb push_back
#define fst find
#define snd second

typedef long long ll;
typedef long double ld;

using namespace std;
string raizcuadrada (ll x) {
    if (x == 0 || x == 1) {
        return "YES";
    }
    else {
        ll a,b,medio,ans=0;
        a = -1;
        b = x;
        while (b-a > 1) {
            medio = (a+b) / 2;
            if (medio*medio == x) {
                return "YES";
            }
            else if (medio*medio > x) {
                b = medio;
            }
            else {
                a = medio;
            }
        }
        return "NO";
    } 
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    for (ll w = 0; w < t; w++) {
        ll n,x,cant=0;
        cin >> n;
        for (ll i = 0; i < n; i++) {
            cin >> x;
            cant = cant + x;
        }
        cout << raizcuadrada(cant) << "\n";
    }
}