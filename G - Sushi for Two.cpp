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
    ll n,cant=0,maxi=0,last=0;
    cin >> n;
    ll sushi[n],peces[n];
    for (ll i = 0; i < n; i++) {
        cin >> sushi[i];
        peces[i] = 1;
    }
    for (ll i = 1; i < n; i++) {
        if (sushi[i] == sushi[i-1]) {
            peces[cant]++;
        }
        else {
            if (cant > 0) {
                if (min(peces[cant],peces[cant-1]) > maxi) maxi = min(peces[cant],peces[cant-1]);
            }
            cant++;
        }
    }
    if (min(peces[cant],peces[cant-1]) > maxi) maxi = min(peces[cant],peces[cant-1]);
    cout << 2*maxi << "\n";
}