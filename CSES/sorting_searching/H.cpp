#include "bits/stdc++.h"

using namespace std;
#define INF 1e10+10

int main(){
    long long int n, sum = 0, ans = -INF;
    cin>>n;
    long long int vec[n];
    for(long long int i = 0; i < n; i++){
        cin>>vec[i];
        sum = max(vec[i], sum +  vec[i]);
        ans = max(ans, sum);
    }
    cout<<ans<<endl;
    return 0;
}