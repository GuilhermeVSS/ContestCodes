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
        int n;
        cin>>n;
        if(n < 2020){
            cout<<"NO"<<endl;
            continue;
        }

        int x = n/2020;

        if( n - (2020*x) <= x) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    return 0;
}