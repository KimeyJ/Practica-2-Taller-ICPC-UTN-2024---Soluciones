#include <bits/stdc++.h>
    
#define forr(i, a , b) for(int i = (int) a; i < (int) b; i++)
#define forn(i, n) forr(i, 0, n)
#define pb push_back
// #define fst first
// #define snd second
    
typedef long long ll;
typedef long double ld;
    
using namespace std;
    
ll busquedasecuencias (ll n, ll k) {
    ll ans = 0,aux=0;
    for (ll i = 1; i <= n; i++) {
        ll fst = i;
        ll snd = n;
        bool flag = true;
        for (ll j = 0; j < k-2; j++) {
            aux = fst;
            fst = snd - aux;
            snd = aux;
            if (fst > snd || fst < 0 || snd < 0) {
                flag = false;
                break;
            }
        }
        if (flag) {
            ans++;
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
        ll n,k;
        cin >> n >> k;
        if (k >= 7 && n < k ) {
            cout << 0 << "\n";        
        }
        else {
            cout << busquedasecuencias(n,k) << "\n";
        }
    }
}