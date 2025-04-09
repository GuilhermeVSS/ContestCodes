#include "bits/stdc++.h"

using namespace std;

int  main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int minF = 1e9 + 10;
        int maxF = 0;
        for(int i = 0; i < n; i++){
            int aux;
            cin>>aux;
            minF = min(minF, aux);
            maxF = max(maxF, aux);
        }

        cout<<maxF - minF<<endl;
    }
    return 0;
}