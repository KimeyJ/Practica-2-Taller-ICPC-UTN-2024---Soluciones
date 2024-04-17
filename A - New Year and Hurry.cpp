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
    ll n,k,tiempo,ans=0;
    cin >> n >> k;
    tiempo = 240 - k;
    for (int i = 1; i <= n; i++){
        if (tiempo - (5*i) >= 0){
            tiempo = tiempo - (5*i);
            ans++;
        }
        else {
            break;
        }
    }
    cout << ans << "\n";
}