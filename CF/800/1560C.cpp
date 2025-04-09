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
        int x;
        cin>>x;
        int row = ceil(sqrt(x));
        int start = pow(row-1, 2) + 1;
        int column, row_ans;
        if(x < start + row) {
            row_ans = x-start + 1; column = row;
        }
        else { 
            row_ans = row; column = pow(row, 2) - x + 1;
        }
        cout<<row_ans<<" "<<column<<endl; 
    }

    return 0;
}