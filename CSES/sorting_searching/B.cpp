#include "bits/stdc++.h"

using namespace std;
const int MAXN = 1e6+10;
int vecA[MAXN];
int vecB[MAXN];

int bbs(int goal, int s, int n){
    int l = s; int r = n;
    while(l < r) {
        int mid = (l + r)/2;
        if(vecB[mid] >= goal) r = mid;
        else l = mid+1;
    }
    return r;
}


int main() {
    int n, m, c;
    int count = 0;
    cin >> n >> m >> c;
    for(int i = 0; i < n; i++){
        cin >> vecA[i];
    }
    sort(vecA, vecA+n);
    
    for(int i = 0; i < m; i++){
        cin >> vecB[i];
    }

    sort(vecB, vecB+m);
    
    int start = 0;
    for(int i = 0; i < n; i++){
        int pos = bbs(vecA[i]-c, start, m);
        if(vecB[pos] >= vecA[i] - c && vecB[pos] <= vecA[i] + c) {
            count ++;
            start = pos + 1;
        }
    }

    cout<<count<<endl;
    return 0;
}