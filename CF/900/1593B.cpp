#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MAXN = 1e9 + 10;
typedef pair<int, int> pii;
map<string, int> visited;
vector<string> vec = {"00", "25", "50", "75"};

int solve(string s, string x){
    
    int pos = s.size() -1;
    int ans = 0;

    while(pos >= 0 && s[pos] != x[1]){
        pos--;
        ans++;
    }

    if(pos < 0) return 20;

    pos--;

    while(pos >= 0 && s[pos] != x[0]){
        pos--;
        ans++;
    }

    return pos < 0? 20:ans;
}

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t;
   cin>>t;
   while(t--){
    string s;
    cin>>s;
    int ans = 20;
    for(auto w: vec){
        ans = min(ans, solve(s, w));
    }
    cout<<ans<<endl;
   }
   return 0;
}