#include "bits/stdc++.h"

using namespace std;


int solve(int n){
    int s = n;
    while(s != 0){
        n--;
        s = s & n;
    }
    return n;
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