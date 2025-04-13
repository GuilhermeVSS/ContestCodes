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
        ll n, m;
        cin>>n>>m;
        double vec[n];
        ll sum = 0;
        for(int i = 0; i < n; i++){
            cin>>vec[i];
            sum += (ll)vec[i];
        }

        ll max = round(sum/m);
        
    }
   return 0;
}