#include "bits/stdc++.h"

using namespace std;

typedef pair<int, int> pii;
vector<pii> vec;


int main(){
    int n;
    cin>> n;
    for(int i = 0; i < n; i++){
        int x, y;
        cin>>x>>y;
        vec.push_back({y, x});
    }
    sort(vec.begin(), vec.end());
    int lastEnd = 0, ans = 0;
    for(int i = 0; i < n; i++){
        if(vec[i].second >= lastEnd){
            lastEnd = vec[i].first;
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}