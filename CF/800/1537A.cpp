#include "bits/stdc++.h"

using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int a, s = 0;
        cin>>a;
        for(int i = 0; i < a; i++) {
            int b;
            cin>>b;
            s += b;
        }
        if(s > a) cout<< s-a<<endl;
        else if(s < a) cout<<1<<endl;
        else cout<<0<<endl;
    }
    return 0;  
}