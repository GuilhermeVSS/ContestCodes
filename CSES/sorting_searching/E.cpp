#include "bits/stdc++.h"


using namespace std;

typedef pair<int, int> pii;

vector<pii> clients;
int main (){

    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        clients.push_back({x, 1});
        clients.push_back({y, 0});
    }
    sort(clients.begin(), clients.end());
    int ans = 0, count = 0;
    for(int i = 0; i < clients.size(); i++){
        if(clients[i].second){
            count++;
        }else {
            ans = max(ans, count);
            count --;
        }
    }
    cout<<ans<<endl;
    return 0;
}