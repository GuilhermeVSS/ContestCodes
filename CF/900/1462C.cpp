#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MAXN = 1e9 + 10;
typedef pair<int, int> pii;
int number[] = {1,2,3,4,5,6,7,8,9};
vector<ll> visited (51, 1e10 + 10);
int n;

void solve(int i, int currentValue, ll gotenNumbers){
   if(i >= 10) return;
   
   visited[currentValue] = min(visited[currentValue], gotenNumbers);
   solve(i + 1, currentValue, gotenNumbers);
   solve(i + 1, currentValue + number[i], (gotenNumbers*10) + number[i]);

}

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);

   solve(0, 0, 0);
   // for(auto w: visited){
   //    cout<<w<<" ";
   // }
   // cout<<endl;
   int t;
   cin>>t;
   while(t--){
      cin>>n;
      ll ans = visited[n];
      if(ans == (ll)1e10 + 10){
         cout<<-1<<endl;
      }
      else cout<<ans<<endl;
   }

   return 0;
}