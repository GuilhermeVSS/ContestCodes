#include "bits/stdc++.h"


using namespace std;

const int MAXN = 1e4+10;
int main(){
    int  t;
    cin>>t;
    while(t--){
        int b;
        cin>>b;
        int count =  1;
        int sum = 1;
        int previous  = 1;
        while(sum < b){
            if(sum + previous + 2  <=  b){
                sum += previous + 2;
                previous +=  2;
            } else {
                sum += (b-sum);
            }
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}