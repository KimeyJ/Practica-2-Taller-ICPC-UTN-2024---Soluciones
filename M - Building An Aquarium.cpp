#include <bits/stdc++.h>

#define forr(i, a, b) for(int i = (int) a; i < (int) b; i++)
#define forn(i, n) forr(i, 0, n)
#define pb push_back
#define fst find
#define snd second

typedef long long ll;
typedef long double ld;

using namespace std;

ll binarysearch(vector<ll> &vec, ll n, ll x) {
        ll a = -1;
        ll b = 2147483647;
        ll ans = 0;
        while (b-a > 1) {
            ll suma = 0;
            ll medio = (a+b) / 2;
            forn (i,n) {
                if (vec[i] < medio) {
                    suma += medio-vec[i];
                } 
            }
            if (suma == x) {
                ans = medio;
                break;
            }
            else if (suma > x){
                b = medio;
            }
            else {
                ans = max(ans,medio);
                a = medio;
            }

        }
        return ans;
    }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {
        ll n,x,a;
        cin >> n >> x;
        vector<ll> corals;
        for (ll i=0;i<n;i++) {
            cin >> a;
            corals.pb(a);
        }
        cout << binarysearch(corals,n,x) << "\n";
    }
}