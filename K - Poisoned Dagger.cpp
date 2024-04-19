#include <bits/stdc++.h>

#define forr(i, a, b) for(int i = (int) a; i < (int) b; i++)
#define forn(i, n) forr(i, 0, n)
#define pb push_back
#define fst find
#define snd second

typedef long long ll;
typedef long double ld;

using namespace std;

ll binarysearch(vector<ll> &v, ll n, ll h) {
        ll a = -1, m = 0;
        ll b = 1e18;
        ll suma = 0;
        ll ans = 1e18;
        while (b-a > 1) {
            m = (a+b)/2;
            suma = m;
            for (ll i=1; i<n; i++) {
                suma += min(m,v[i]-v[i-1]);
            }
            if (suma >= h) {
                b = m;
            }
            else {
                a = m;
            }
        }
        return b;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {
        ll n,h;
        cin >> n >> h;
        vector<ll> v;
        forn(i,n) {
            ll a;
            cin >> a;
            v.pb(a);
        }
        cout << binarysearch(v,n,h) << "\n";
    }
}