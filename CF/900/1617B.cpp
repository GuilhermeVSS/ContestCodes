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

        int c = 1;
        int a, b;

        n--;
        if(n%2 == 0){
            a = (n/2) - 1;
            b = (n/2) + 1;
        } else {
            a = (n/2);
            b = (n/2) +1;
    
        while(__gcd(a,b) != c){
            a--;
            b++;
        }
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    return 0;
}