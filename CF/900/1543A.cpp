#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MAXN = 1e9 + 10;
typedef pair<ll, ll> pii;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll a, b;
        cin>>a>>b;
        if(a == b){
            cout<<0<<" "<<0<<endl;
            continue;
        }
        ll diff = abs(a-b);
        ll maxF = max(a, b);
        cout<<diff<<" "<<min(maxF%diff,diff-maxF%diff)<<endl;
    }   
    return 0;
}