#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MAXN = 1e9 + 10;
typedef pair<int, int> pii;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int vec[n];
        for(int i = 0; i < n; i++){
            cin>>vec[i];
        }

        int x = vec[0];
        for(int i = 1; i < n; i++){
            x &= vec[i];
        }
        cout<<x<<endl;
    }
    return 0;
}