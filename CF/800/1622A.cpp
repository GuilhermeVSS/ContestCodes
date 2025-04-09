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

        if((a == b && c %2 == 0) || (a == c && b%2 == 0) || (c == b && a%2 == 0)) cout<<"YES"<<endl;
        else if( abs(max(a, b) - max(c, min(a,b))) == min(c, min(a,b))) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


    return 0;
}