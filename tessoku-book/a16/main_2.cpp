// A16 - Dungeon 1
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define repi(i, s, n) for(int i = (int)(s); i < (int)(n); ++i)
#define rep(i, n) repi(i, 0, n)
#define rrepi(i, n, s) for(int i = n-1; i >= s; --i)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define el '\n'
const int INF = 1e9;
const ll LLINF = 1e18;

int main(){
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    rep(i, n-1) cin >> a[i];
    rep(i, n-2) cin >> b[i];
    // 動的計画法(配るDP)
    vector<int> dp(n, INF);
    dp[0] = 0;
    rep(i, n-1){
        dp[i+1] = min(dp[i+1], dp[i]+a[i]);
        if(i < n-2) dp[i+2] = min(dp[i+2], dp[i]+b[i]);
    }
    cout << dp[n-1] << el;
    return 0;
}