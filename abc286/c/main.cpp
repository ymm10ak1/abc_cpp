// C - Rotate and Palindrome
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define repi(i, s, n) for(int i = (int)(s); i < (int)(n); ++i)
#define rep(i, n) repi(i, 0, n)
#define rrepi(i, n, s) for(int i = (int)(n)-1; i >= (int)(s); --i)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define el '\n'
const int INF = 1e9;
const ll LLINF = 1e18;

int main(){
    int n;
    ll a, b;
    cin >> n >> a >> b;
    string s; cin >> s;
    s = s+s;
    ll ans = LLINF;
    rep(i,n){
        int m = i+n;
        ll v = a*i;
        rep(j,n/2){
            if(s[i+j] != s[m-j-1]) v += b;
        }
        ans = min(ans, v);
    }
    cout << ans << el;
    return 0;
}
