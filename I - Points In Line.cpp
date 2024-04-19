#include <bits/stdc++.h>
    
#define forr(i, a , b) for(ll i = (ll) a; i < (ll) b; i++)
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
    ll n,d,x,ans=0;
    vector<ll> nums;
    cin >> n >> d;
    forn(i,n) {
        cin >> x;
        nums.pb(x);
    }
    ll j=0;
    forn(i,n) {
        while (nums[i] - nums[j] > d) j++;
        ans = ans + ((i-j)*(i-j-1)/2);
        
    }
    cout << ans << "\n";
}