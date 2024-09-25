// C - Divide and Divide
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

map<ll,ll> mp;

ll f(ll n){
    if(n == 1) return 0;
    if(mp[n] != 0) return mp[n];
    return mp[n] = n+f(n/2)+f((n+1)/2);
}

int main(){
    ll n; cin >> n;
    cout << f(n) << el;
    return 0;
}