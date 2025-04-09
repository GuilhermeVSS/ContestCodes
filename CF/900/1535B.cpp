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
        cin>> n;
        int vec[n];
        for(int i=0; i<n; i++){
            cin>>vec[i];
        }
        int count = 0;
        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                if(vec[i] % 2 == 0 || vec[j] %2 == 0 || __gcd(vec[i], vec[j]) > 1){
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }


    return 0;
}