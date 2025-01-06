#include "bits/stdc++.h"

using namespace std;


int main (){
    long long int n;
    cin>>n;
    long long int sum = 0;
    for(int i = 0; i < n-1; i++){
        long long int aux;
        cin>>aux;
        sum += aux;
    }

    unsigned long long int sum2 = ((n+1)*n)/2;
    cout<<sum2-sum<<endl;
    return 0;
}