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
        map<char, int> m;

        cin>>s;
        for(auto w: s){
            if(m[w]) m[w]++;
            else m[w] = 1;
        }

        if(m['B'] == m['C'] + m['A']) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}