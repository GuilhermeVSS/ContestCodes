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
        ll a, b;
        cin>>a>>b;
        ll c = b/2;

        if(c%2 != 0 && a%2 == 0) a++;
        else if(c%2 != 0) a--;
        if( b%2 != 0 && a%2 != 0) a+=b;
        else  if(b%2 != 0) a-=b;
        cout<<a<<endl;
        
    }
   return 0;
}