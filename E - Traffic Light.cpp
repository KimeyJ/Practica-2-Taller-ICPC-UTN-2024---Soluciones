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
        string luces,circulo;
        char c;
        ll n,ans=0,pos=-1;
        cin >> n >>c;
        cin >> luces;
        if (c == 'g') {
            cout << 0 << "\n";
        }
        else {
            circulo = luces+luces; 
            for(ll i=(2*n)-1 ; i >= 0 ; i = i-1) {
                if (circulo[i] == 'g') {
                    pos = i;
                }
                else if (circulo[i] == c) {
                    ans = max(ans,pos-i);
                }
            }
            cout << ans << "\n";
        }
    }
}