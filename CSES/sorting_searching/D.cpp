#include "bits/stdc++.h"

using namespace std;

const int MAXN = 1e6 + 10;
int vecA[MAXN];
int n, m;
map<int, int> mMap;

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> vecA[i];
        mMap[vecA[i]]++;
    }

    for (int i = 0; i < m; i++)
    {
        int aux;
        cin >> aux;
        auto it2 = mMap.lower_bound(aux);

        if((it2 == mMap.begin() && it2 == mMap.end()) || (it2->first > aux && it2 == mMap.begin())){
            cout<<-1<<endl;
            continue;
        }
        if((it2->first > aux && it2 != mMap.begin()) || (it2 == mMap.end() && it2 != mMap.begin())) it2--;
        if(it2->first <= aux && it2->second != 0){
            cout<<it2->first<<endl;
            mMap[it2->first]--;
            if(mMap[it2->first] == 0){
                mMap.erase(it2->first);
            }
        }
        
    }

    return 0;
}