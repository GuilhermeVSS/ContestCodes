#include <bits/stdc++.h>

using namespace std;

using ll = long long;
const int MAXN = 1e9 + 10;
typedef pair<int, int> pii;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>> t;
    while(t--){
        int n;
        int count1 = 0, count2 = 0;
        cin>> n;
        for(int i = 0; i < n; i++){
            int aux;
            cin>>aux;
            if(aux == 1) count1++;
            else count2++;
        }

      if((count1 %2 == 0 && count2 %2 == 0) || (count2%2 != 0 && count1%2 == 0 && count1 >= 2)) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
    return 0;
}