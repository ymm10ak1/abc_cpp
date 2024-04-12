// D - FG operation
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

const int MOD = 998244353;
int dp[200010][10];

int main(){
    int n; cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    ++dp[0][a[0]];
    rep(i,n-1){
        rep(j,10){
            if(dp[i][j]>0){
                int d1 = (j+a[i+1])%10;
                int d2 = (j*a[i+1])%10;
                dp[i+1][d1] = (dp[i+1][d1]+dp[i][j])%MOD;
                dp[i+1][d2] = (dp[i+1][d2]+dp[i][j])%MOD;
            }
        }
    }
    rep(i,10) cout << dp[n-1][i] << el;
    return 0;
}