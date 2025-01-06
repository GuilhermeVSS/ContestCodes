#include "bits/stdc++.h"

using namespace std;

typedef long long int lli;
const int MAXN = 1e6+10;
lli numbers[MAXN];

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        lli sum = 0;
        lli maxFound  = -1e10+10;
        for(int i = 0; i < n; i++){
            cin>>numbers[i];
            if(numbers[i] > maxFound){
                if(i > 0)
                    sum += maxFound;
                maxFound = numbers[i];
                continue;
            }
            sum += numbers[i];
        }
                
        long double otherAverage = double(sum)/(n - 1);
        cout<<fixed<<setprecision(9);
        cout<<double(maxFound) +  otherAverage<<endl;
    }
    return 0;
}