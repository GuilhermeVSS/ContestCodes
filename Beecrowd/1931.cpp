#include "bits/stdc++.h"

using namespace std;

#define INF 1e9+11

typedef pair<int, int> pii;

priority_queue<pii> q;
const int MAXN = 1e5+10;
vector<pii> adj[MAXN];
int c, v;
int distEven[MAXN], distOdd[MAXN];
bool processedEven[MAXN], processedOdd[MAXN];



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>c>>v;

    for(int i = 1; i <= c; i++){
        distOdd[i] = INF;
        distEven[i] = INF;
    }

    for(int i = 0; i < v; i++){
        int c1, c2, cost;
        cin>>c1>>c2>>cost;
        adj[c1].push_back({c2, cost});
        adj[c2].push_back({c1, cost});
    }

    distEven[1] = 0;
    q.push({0, 1});
    int ans = -1;
    while(!q.empty()){
        int a = q.top().second; q.pop();
        if(processed[a]) continue;
        processed[a] = true;
        for(auto u : adj[a]){
            int b = u.first, w = u.second;
            if((dist[b]> dist[a] + w)){
                dist[b].first = dist[a].first + w;
                dist[b].second = dist[a].second + 1;
                q.push({-dist[b], b});
            }
        }
    }


    
    // cout<<ans<<endl;
    // cout<<dist[c].first<<endl;
    // for(int i = 1; i <= v; i++){
    //     cout<<dist[i].first<<" ";
    // }
    if(dist[c].first != INF){
        cout<<dist[c].first<<endl;
    }else {
        cout<<-1<<endl;
    }
    return 0;
}
