#include "bits/stdc++.h"

using namespace std;
#define INF 1e10+10;
const long long int MAXN = 1e6+10;
long long int vec[MAXN];

int main(){
    long long int n;
    cin>>n;
    for(long long int i = 0; i < n; i++){
        cin>>vec[i];
    }
    
    sort(vec, vec+n);
    long long int target = vec[n/2], ans = 0;
    for(int i = 0; i < n; i++){
        ans += max(vec[i]-target, target-vec[i]);
    }
    cout<<ans<<endl;
    
    return 0;
}