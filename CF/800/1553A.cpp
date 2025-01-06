#include "bits/stdc++.h"


using namespace std;


int solve(int n){
   int ans = n/10;
   if(n%10 == 9) ans++;
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
    return 0;
}