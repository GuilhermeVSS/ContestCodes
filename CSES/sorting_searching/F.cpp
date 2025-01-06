#include "bits/stdc++.h"

using namespace std;

const int MAXN = 1e6+10;
map<int, int> mMap;
int vec[MAXN];

int main(){
    int n, m;
    cin>>n >> m;
    int x = 0, y = 0;
    for(int i = 0; i < n; i++){
        cin>>vec[i];
        if(mMap[m - vec[i]]) {
            x = mMap[m - vec[i]];
            y = i+1;
        }
        mMap[vec[i]] = i+1;
    }
    
    !x? cout<<"IMPOSSIBLE"<<endl : cout<<x<<" "<<y<<endl;
    return 0;
}