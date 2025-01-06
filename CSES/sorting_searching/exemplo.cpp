#include "bits/stdc++.h"

using namespace std;

const int MAXN = 1e3+10;
int mainVec[MAXN];
int depth[MAXN];
int n;

void solve(int* Vec, int l, int r, int d){
    if(l <= r){
        int pos = l;
        int maxFind = -1;
        for(int i = l; i <= r; i++){
            if(Vec[i] > maxFind){
                maxFind = Vec[i];
                pos = i;
            }
        }
        depth[pos] = d;
        
        solve(Vec, l, pos-1, d+1);
        solve(Vec, pos+1, r, d+1);
    }
}

int main(){
    int cases;
    cin>>cases;
    while(cases--){
        cin>>n;
        for(int i = 0; i < n; i++){
            cin>>mainVec[i];
        }

        solve(mainVec, 0, n-1, 0);
        for(int i = 0; i < n; i++){
            cout<<depth[i]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}