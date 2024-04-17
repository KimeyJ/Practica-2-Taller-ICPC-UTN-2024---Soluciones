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
    for (ll w=0 ; w < t; w++) {
        ll n,k,ans=0;
        cin >> n >> k;
        ans = (n+k-1)/k;
        ans = (ans*k+n-1)/n;
        cout << ans << "\n";
    }
}