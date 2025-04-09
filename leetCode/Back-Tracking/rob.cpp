#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MAXN = 1e9 + 10;
typedef pair<int, int> pii;

int vec[] = {2,7,9,3,1};
int ans[10];


int solve(int position){
    if(position >= 5) return 0;
    int ans;
    ans = max(solve(position+1), solve(position+2) + vec[position]);
    return ans;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // for(int i = 0; i < 10; i++){
    //     vec[i] = i+1;
    // }

    // ans[0] = vec[0];
    // ans[1] = max(vec[0], vec[1]);
    // for(int i = 2; i <5; i++)
    // {
    //    ans[i] = max(ans[i-1], ans[i-2] + vec[i]);
    // }    
    
    // cout<<ans[4]<<endl;
    
        
    int previous = max(vec[1], vec[0]);//i-1
    int beforePrevious = vec[0];//i-2
     for(int i = 2; i <5; i++)
    {
       int aux = previous;
       previous = max(beforePrevious + vec[i], previous);
       beforePrevious = aux;
    } 
    cout<<previosu<<endl;

    return 0;
}