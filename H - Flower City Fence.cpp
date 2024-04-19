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
    ll t;
    cin >> t;
    while (t--) {
        ll n,x;
        bool flag = false;
        vector<ll> v2;
        cin >> n;
        vector<ll> v1(n+1);
        for (ll i=1; i<=n; i++) {
            cin >> v1[i];
        }
        if (v1[1] != n) {
            cout << "NO" << "\n";
        }
        else {
            for (int i = n; i >= 1; i--) {
                while (v2.size() < v1[i]) {
                    v2.pb(i);
                }
            }
            for(ll i=1; i<=n; i++){
                if (v1[i] != v2[i-1]) {
                    flag = true;
                }
            }
            if (flag == true) {
                cout << "NO" << "\n";
            }
            else {
                cout << "YES" << "\n";
            }
        }
    }
}