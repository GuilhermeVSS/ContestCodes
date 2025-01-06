#include "bits/stdc++.h"

using namespace std;
typedef long long int ll;

const int MAXN = 1e6 + 10;
ll numbers[MAXN];


ll solve(ll* arr, ll N)
{
    
    ll X = 1LL;

    sort(arr, arr + N);

    for (int i = 0; i < N; i++) {
        if (arr[i] > X) {
            return X;
        }
        X += arr[i];
    }
    return X;
}

int main()
{

    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>numbers[i];
    }

    ll ans = solve(numbers, n);
    cout<<ans<<endl;
    return 0;
}