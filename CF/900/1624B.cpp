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
        int a, b, c;
        cin>>a>>b>>c;
        int diff, m;

        // A
        diff = c-b;    
        m = (b-diff)/a;
        if((m*a + diff) == b  && (m*a) + (2*diff) == c && m > 0){
            cout<<"YES"<<endl;
            continue;
        }

        // B
        diff = (c-a)/2;
        m = (a+diff)/b;
        if((a+diff) == (b*m)  && (b*m+diff) == c && m > 0){
            cout<<"YES"<<endl;
            continue;
        }
        // C
        diff = b-a;
        m = (b+diff)/c;
        if((b+diff) == (c*m) && (a+(2*diff)) == c*m && m > 0){
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }
    return 0;
}