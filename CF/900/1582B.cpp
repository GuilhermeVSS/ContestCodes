#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MAXN = 1e9 + 10;
typedef pair<int, int> pii;
int n;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        int vec[n];
        int count1 = 0, count0 = 0;
        for(int i = 0; i < n; i++){
            cin>>vec[i];
            if(vec[i] == 1) count1++;
            if(vec[i] == 0) count0++;            
        }
        
        ll ans = count1 * pow(2,count0);
        cout<<ans<<endl;
    }
   return 0;
}