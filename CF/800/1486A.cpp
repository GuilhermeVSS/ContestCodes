#include "bits/stdc++.h"
using namespace std;

using ll = long long;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll sum = 0;
        bool ans = true;
        for(int i = 0; i < n; i++){
            int aux;
            cin>>aux;
            sum += aux;
            if(sum >= i){
                sum -= i;
            } else {
               ans = false;
               break;
            }
        }
        ans? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
    return 0;
}