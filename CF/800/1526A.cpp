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
        int size = 2*n;
        int vec[size];
        for(int i = 0; i < size; i++){
            cin>>vec[i];
        }

        sort(vec, vec + size);

        for(int i = 1; i < size-1; i+= 2){
            int aux = vec[i+1];
            vec[i+1] = vec[i];
            vec[i] = aux;

        }

        for(int i = 0; i < size; i++){
            cout<<vec[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}