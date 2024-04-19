#include <bits/stdc++.h>
    
#define forr(i, a , b) for(int i = (int) a; i < (int) b; i++)
#define forn(i, n) forr(i, 0, n)
#define pb push_back
#define fst first
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
        ll n,s,ans=-2,suma=0;
        cin >> n >> s;
        ll nums[n];
        forn(i,n) {
            cin >> nums[i];
            suma+=nums[i];
        }
        if (suma < s) {
            cout << -1 << "\n";
            
        }
        else if (suma == s) {
            cout << 0 << "\n";
        }
        else  {
            ll b = 0,a=0;
            suma = 0;
            while (b < n) {
                suma += nums[b];
                if (suma > s) {
                    suma -= nums[a];
                    a++;
                }
                else if (suma == s) {
                    ans = max(ans, b-a+1);
                }
                b++;
            }
            cout << n-ans << "\n"; 
        }
    }
}