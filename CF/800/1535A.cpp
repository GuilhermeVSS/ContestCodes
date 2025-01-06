#include "bits/stdc++.h"

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        if(a > c && a > d && b > c && b > d){ cout<<"NO"<<endl; continue;}
        if(c > a && c > b && d > a && d > b) {cout<<"NO"<<endl; continue;}
        cout<<"YES"<<endl;
    }

    return 0;  
}