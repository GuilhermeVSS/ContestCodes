#include <bits/stdc++.h>

using namespace std;

using ll = long long;
const int MAXN = 1e9 + 10;
string s;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        cin>>s;
        sort(s.begin(), s.end());
        cout<<s<<endl;
    }

    return 0;
}