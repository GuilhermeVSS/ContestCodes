#include "bits/stdc++.h"

using namespace std;

typedef long long int lli;
const int MAXN = 1e6+10;
lli numbers[MAXN];

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>numbers[i];
        }
        
        int pa = 0, pb = 1;
        for(int i = 2; i < n; i++){
            if(numbers[i] * numbers[i-1] > numbers[pa] * numbers[pb]){
                pa = i-1;
                pb = i;
            }
        }
        lli ans;
        ans = numbers[pa] * numbers[pb];
        cout<<ans<<endl;
    }
    return 0;
}