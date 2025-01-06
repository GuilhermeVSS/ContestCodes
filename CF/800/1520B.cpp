#include "bits/stdc++.h"

using namespace std;
using  ll = long long;


ll solve (int n){
    ll ans = 0;
    for(ll i = 1; i <= n; i = i * 10 + 1){
        for(int j = 1; j <= 9; j++){
            if(i *j  <= n){
                ans ++;
            }
        }
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<solve(n)<<endl;
    }
}