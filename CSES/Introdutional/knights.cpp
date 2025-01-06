#include "bits/stdc++.h"

using namespace std;

int main()
{
    long long int n;
    cin>>n;
    for(long long int i = 1; i <= n; i++){
        long long int invalid_combinations = 4 * (i-1) * (i-2);
        long long int all_combinations = ((i*i) * ((i*i)-1))/2;
        cout<<all_combinations-invalid_combinations<<endl;
    }
    
    return 0;
}
