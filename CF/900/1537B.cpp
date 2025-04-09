#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MAXN = 1e9 + 10;
typedef pair<ll, ll> pll;
pll p[4];
pll ans[2];

void solve(ll a, ll b, ll c, ll d){
    p[0] = {1,1};
    p[1] = {1, b};
    p[2] = {a, 1};
    p[3] = {a, b};

    ll distA = abs(p[0].first - c) + abs(p[0].second - d);
    ll distB = abs(p[2].first - c) + abs(p[2].second - d);
    if(distA > distB){
        ans[0] = p[0];
    } else ans[0] = p[2];

    distA = abs(p[1].first - ans[0].first) + abs(p[1].second - ans[0].second);
    distB = abs(p[3].first - ans[0].first) + abs(p[3].second - ans[0].second);

    if(distA > distB){
        ans[1] = p[1];
    } else ans[1] = p[3];
    
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll a, b, c, d;
        cin>>a>>b>>c>>d;
        solve(a, b, c, d);
        cout<<ans[0].first<<" "<<ans[0].second<<" "<<ans[1].first<<" "<<ans[1].second<<endl;
    }
    return 0;
}
