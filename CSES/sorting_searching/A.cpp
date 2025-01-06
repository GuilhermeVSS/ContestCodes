#include "bits/stdc++.h"

using namespace std;

const int MAXN = 1e6+10;
int vec[MAXN];


int main(){
    int n, count = 1;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>vec[i];
    }

    sort(vec, vec+n);
    for(int i = 1; i < n; i++){
        if(vec[i] != vec[i-1]) count++;
    }

    cout<<count<<endl;
    return 0;
}
