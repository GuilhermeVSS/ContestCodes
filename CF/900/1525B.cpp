#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MAXN = 1e9 + 10;
typedef pair<int, int> pii;


bool checkSorted(int * vec, int n){
    for(int i = 0; i < n-1; i++){
        if(vec[i] != vec[i+1] - 1) 
            return false;
    }
    return true;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int vec[n];
        int maxFound = -100, posMax;
        int minFound = 100, posMin;

        for(int i = 0; i < n; i++){
            cin>>vec[i];
            if(vec[i] > maxFound){ 
                maxFound = vec[i];
                posMax = i;
            }
            if(vec[i] < minFound){ 
                minFound = vec[i];
                posMin = i;
            }
        }

        if(checkSorted(vec, n)) {cout<<0<<endl;continue;}

        if(posMin == 0 || posMax == n-1) {cout<<1<<endl; continue;}

        if(posMax == 0 && posMin == n-1){
            cout<<3<<endl;
            continue;
        }

        cout<<2<<endl;
    }
    return 0;
}