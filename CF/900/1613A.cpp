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
        ll a, b, c, d;
        cin>>a>>b;
        cin>>c>>d;
        ll p = min(b,d);
        b -= p;
        d -= p;

        if(b >= 7) cout<<">"<<endl;
        else if(d >= 7) cout<<"<"<<endl;
        else {
            for(int i = 0; i<b; i++) a *= 10;
            for(int i = 0; i < d; i++) c *= 10;

            if(a > c) cout<<">"<<endl;
            else if(c > a) cout<<"<"<<endl;
            else cout<<"="<<endl;
        }
    }   
    return 0;
}