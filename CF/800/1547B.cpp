#include <bits/stdc++.h>

using namespace std;

using ll = long long;
const int MAXN = 1e9 + 10;
typedef pair<int, int> pii;

bool solve(string s, int b, int e, int n, char nC){
    if(b-1 < 0 && e+1 >= n) return true;
    if(b-1 >= 0 && s[b-1] == nC){
        return  true && solve(s, b-1, e, n, ++nC);
    }
    if(e+1 < n && s[e+1] == nC){
        return true && solve(s,  b, e+1, n, ++nC);
    }
    return false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>> t;
    while(t--){
        string s;
        cin>>s;
        int pos = -1;
    
        for(int i = 0; i < (int)s.size(); i++ ){
            if(s[i] == 'a') pos = i;
        }

        if(pos == -1){
            cout<<"NO"<<endl;
            continue;
        }
        bool ans = solve(s, pos, pos, (int)s.size(), 'b');
        ans? cout<<"YES"<<endl: cout<<"NO"<<endl;
    }

    return 0;
}