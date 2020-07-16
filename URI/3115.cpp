#include "bits/stdc++.h"

using namespace std;

typedef unsigned long long int llu;

#define x first
#define y second
#define INF 1e9+10

const int MAXN = 1e6 + 10;

typedef pair<int,llu> pil;

vector <pil> adj[MAXN];
llu weight[MAXN];
bool vis[MAXN];
int n;

void dfs(int node, llu cost){
    if(vis[node]) return;
    vis[node] = true;
    llu aux;
    for(auto w : adj[node]){
        aux = min(w.y, cost);
        dfs(w.x, aux);
    }
    weight[node] = cost;
    return;
}

int main (){
    int v, u;
    llu c;
    scanf("%d", &n);
  
    for(int i = 1; i < n; i++){
        scanf("%d %d %llu", &v, &u, &c);
        adj[v].push_back({u,c});
        adj[u].push_back({v,c});
       
    }
   
    dfs(n, INF);
    for(int i = 1; i < n; i++){
         printf("%llu%c", weight[i], " \n"[i==n-1]);
    }

    return 0;
}