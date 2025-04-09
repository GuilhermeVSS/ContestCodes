#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MAXN = 1e9 + 10;
typedef pair<int, int> pii;


ll solve(ll a, ll b){
    ll cnt = 1;
    for(ll i = 1; i <= b; i++){
        cnt *= 10;
    }

    return a * cnt;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll a, b, c, d;
        cin>>a>>b;
        cin>>c>>d;
        
        b -= min(b,d);
        d -= min(b,d);

        
        ll rA = solve(a, b);
        ll rB = solve(c, d);

        if(rA > rB) cout<<">"<<endl;
        else if(rA < rB) cout<<"<"<<endl;
        else cout<<"="<<endl;
    }   
    return 0;
}