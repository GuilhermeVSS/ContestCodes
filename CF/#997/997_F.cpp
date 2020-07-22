#include "bits/stdc++.h"
 
using namespace std;
 
const int MAXN = 2e5 + 10;
int n;
map<int,int> dp;
int indx[MAXN];
int length = -1, value;
vector<int> resp;
 
int main()
{
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        int a;
        scanf("%d", &a);
        dp[a] = max(dp[a], dp[a-1] + 1);
        indx[i] = a;
        if(dp[a] > length){
            length = dp[a];
            value = a;
        }
     }
    printf("%d\n", length);
    for(int i = n; i >= 0 && length > 0; i--){
            if(indx[i] == value){
                value--;
                resp.push_back(i);
                length--;
            }
    }   
 
    reverse(resp.begin(),resp.end());
 
    for(auto w : resp){
        printf("%d ", w);
    }
    putchar('\n');
    return 0;
}