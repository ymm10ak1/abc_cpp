// C - Together
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

int cnt[100005];

int main(){
    int n; cin >> n;
    vector<int> a(n);
    rep(i,n){
        cin >> a[i];
        ++cnt[a[i]];
    }
    int ans = 0;
    rep(i,100000){
        ans = max(ans, cnt[i]+cnt[i+1]+cnt[i+2]);
    }
    cout << ans << el;
    return 0;
}
