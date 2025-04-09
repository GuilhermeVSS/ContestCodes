#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MAXN = 1e9 + 10;
typedef pair<int, int> pii;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n, sum = 0;
        cin>>n;
        for(ll i = 0; i < n; i++){
            ll x;
            cin>>x;
            sum += x;
        }

        ll r = sum%n;

        ll ans = r * (n-r);
        cout<<ans<<endl;
    }
    return 0;
}