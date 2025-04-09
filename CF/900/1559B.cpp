#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MAXN = 1e9 + 10;
typedef pair<int, int> pii;
map<char, char> mC;

int calculateValue(string s, int n){
    int ans = 0;
    for(int i = 1; i < n; i++){
        if(s[i-1] == s[i]) ans++;
    }
    return ans;
}

string solve(string s, int l, char c){
    for(int i = 0; i < l; i++){
        if(s[i] == '?' && i != 0){
            c = mC[s[i-1]];
            s[i] = c;
        }
        else if(s[i] == '?' && i == 0){
            s[i] = c;
            c = mC[c];
        }
    }
    return s;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    mC['B'] = 'R';
    mC['R'] = 'B';
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        string a = solve(s, n, 'B');
        string b = solve(s, n, 'R');

        int c = calculateValue(a, n);
        int d = calculateValue(b, n);

        if(c < d) cout<<a<<endl;
        else cout<<b<<endl;
    }
    return 0;
}