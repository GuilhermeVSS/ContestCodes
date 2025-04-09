#include "bits/stdc++.h"

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        map<int, char> m;
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i = 0; i < n; i++){
            m[i] = s[i];
        }
        sort(s.begin(), s.end());
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(m[i] != s[i]) ans++;
        }
        cout<<ans<<endl;

    }
    return 0;
}