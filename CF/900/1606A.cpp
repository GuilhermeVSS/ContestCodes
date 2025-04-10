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
        string s;
        cin>>s;
        s[0] = s[s.size()-1];
        cout<<s<<endl;
    }
   return 0;
}