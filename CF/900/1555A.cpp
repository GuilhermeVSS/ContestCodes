#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MAXN = 1e9 + 10;
typedef pair<int, int> pii;



ll solve(ll x){
    if(x%2 != 0) x++;
    if(x < 6) return (ll)6*2.5;
    else return x*2.5;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
       cout<<solve(n)<<endl;
    }   
    return 0;
}