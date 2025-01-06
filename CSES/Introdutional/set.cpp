#include "bits/stdc++.h"

using namespace std;
long long int n;
const int MAXN = 1e6+10;
long long int vis[MAXN];
int countNum;

void solve(long long int target){
    int aux = n;
    while(target != 0){
        if(target - aux >= 0){
            target -= aux;
            vis[aux] = 1;
            countNum++;
        }
        aux--;
    }
}



int main(){

    cin>>n;
    long long int totalSum = ((1+n)*n)/2;
    long long int target = totalSum/2;

    if(totalSum % 2 != 0){
        cout<<"NO"<<endl;
    } else {
        cout<<"YES"<<endl;
        solve(target);
        cout<<countNum<<endl;
        for(long long int  i = 1; i <= n; i++){
            if(vis[i]){
                cout<<i<<" ";
            }
        }
        cout<<endl;
        cout<<n-countNum<<endl;
        for(long long int i = 1; i <= n; i++){
            if(!vis[i]){
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}