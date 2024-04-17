#include <bits/stdc++.h>

#define forr(i, a, b) for(int i = (int) a; i < (int) b; i++)
#define forn(i, n) forr(i, 0, n)
#define pb push_back
#define fst find
#define snd second

typedef long long ll;
typedef long double ld;

using namespace std;

ll binarysearch(ll n, ll k) {
        ll a = -1;
        ll b = k+1;
        ll m = n/2 + 1;
        while (b-a > 1) {
            ll medio = (a+b) / 2;
            if (medio*m <= k){
                a = medio;
            }
            else {
                b = medio;
            }
        }
        return a;
    }
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    for (ll w=0 ; w < t; w++) {
        ll n,k;
        cin >> n >> k;
        cout << binarysearch(n,k) << "\n";
    }
}