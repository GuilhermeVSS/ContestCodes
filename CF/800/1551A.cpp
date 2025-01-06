#include "bits/stdc++.h"

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b, c, d;
        cin>>a;

        d = a%3;
        b = a/3;
        c = b;

       if(d == 1){
        b++;
       }
       else if(d == 2){
        c++;
       }
       
       cout<<b<<" "<<c<<endl;
    }
    return 0;
}