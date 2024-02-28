// 
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
    int n, m;
    string s, t;
    cin >> n >> m >> s >> t;
    string nt = t.substr(0, n);
    string rt = "";
    rrepi(i,t.size(),m-n) rt += t[i];
    reverse(all(rt));
    if(s==nt && s==rt) cout << 0 << el;
    else if(s==nt) cout << 1 << el;
    else if(s==rt) cout << 2 << el;
    else cout << 3 << el;
    return 0;
}