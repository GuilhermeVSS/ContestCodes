#include "bits/stdc++.h"

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int maxFound = -110;
        int minFound = 110;
        int maxPos =  0, minPos = 0;

        for(int i = 0; i < n; i++){
            int a;
            cin>>a;
            if(a > maxFound) {maxFound = a; maxPos = i;}
            if(a < minFound) {minFound = a; minPos = i;}
        }
        
        int leftCost, rightCost,  leftRighCost;
        leftCost = max(maxPos - 0 + 1, minPos - 0 + 1);
        rightCost = max(n- maxPos, n - minPos);
        leftRighCost =  min(maxPos - 0 + 1, n - maxPos) + min(minPos - 0 + 1, n - minPos);
        int ans = min(leftCost ,min(rightCost, leftRighCost));
        cout<<ans<<endl;

    }
    return 0;
}