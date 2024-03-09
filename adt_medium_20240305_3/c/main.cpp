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
    string s; cin >> s;
    int slen = s.size();
    string ns = s+s;
    string min_s = "", max_s = "";
    rep(i,ns.size()-slen){
        string ss = ns.substr(i, slen);
        if(i>0){
            if(ss<min_s) min_s = ss;
            if(ss>max_s) max_s = ss;
        }else{
            min_s = ss;
            max_s = ss;
        }
    }
    cout << min_s << el;
    cout << max_s << el;
    return 0;
}