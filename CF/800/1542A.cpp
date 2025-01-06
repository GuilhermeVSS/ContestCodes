#include "bits/stdc++.h"

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        int cA = 0, cB = 0;
        cin>>a;
        for(int i = 0; i < a*2; i++){
            int b;
            cin>>b;
            if(b%2 == 0) cA++;
            else cB++;
        }
        if(cB == cA) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}