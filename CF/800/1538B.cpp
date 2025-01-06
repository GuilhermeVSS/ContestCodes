#include "bits/stdc++.h"

using namespace std;
const int MAXN = 1e6 + 10;
int number[MAXN];

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, sum = 0, ans = 0;
        cin>>n;
       for(int i=0; i<n; i++){
            cin>>number[i];
            sum += number[i];
       }

       if(sum % n != 0){
        cout<<-1<<endl;
        continue;
       }

       for(int i = 0; i < n; i++){
        if(number[i] > sum/n) ans ++;
       }
       cout<<ans<<endl;
    }
    return 0;
}