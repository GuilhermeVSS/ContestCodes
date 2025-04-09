#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MAXN = 1e9 + 10;
typedef pair<int, int> pii;

bool isPowerOfTwo(ll n) {
    return n > 0 && (n & (n - 1)) == 0;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll x;
        cin>>x;
        isPowerOfTwo(x)? cout<<"NO"<<endl : cout<<"YES"<<endl;
    }   
    return 0;
}