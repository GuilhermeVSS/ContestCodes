#include "bits/stdc++.h"

using namespace std;
const int MAXN = 1e3+10;
int numbers[MAXN];

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int minF = 1000;
        for(int i = 0; i < n;i++){
            cin>>numbers[i];
            minF = min(minF,numbers[i]);
        }
        int count = 0;
        for(int i = 0; i < n;i++){
           if(numbers[i] != minF) count++;
        }
        cout<<count<<endl;
    }
    return 0;
}