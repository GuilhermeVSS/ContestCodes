#include <bits/stdc++.h>

using namespace std;

using ll = long long;
const int MAXN = 1e6 + 10;
string pA, pB;

int solve(int n){
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(pB[i] == '0') continue;
        //avanco direto
        if(pA[i] == '0'){
            pA[i] = '2';
            ans++;
            continue;
        }
        //vejo se consigo cruzar para a esquerda
        if(i-1 >= 0 && pA[i-1] == '1'){
            pA[i-1] = '2';
            ans++;
            continue;
        }
        // vejo se consigo cruzar para a direita
        if(i+1 < n && pA[i+1] == '1'){
            pA[i+1] = '2';
            ans++;
            continue;
        }
    }
    return ans;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>> n;
        cin>>pA;
        cin>>pB;
        cout<<solve(n)<<endl;
    }

    return 0;
}