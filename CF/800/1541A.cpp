#include "bits/stdc++.h"

using namespace std;

int numbers[110];

void solve(int n){
    if(n %2 == 0){
        for(int i = 0; i < n; i += 2){
            int aux = numbers[i];
            numbers[i] = numbers[i+1];
            numbers[i+1] = aux;
        }
    } else {
        int aux = numbers[2];
        int auxB = numbers[0];
        for(int i = 1; i < 3; i++){
            int auxC = numbers[i];
            numbers[i] = auxB;
            auxB = auxC;
        }
        numbers[0] = aux;

        for(int i = 3; i < n; i += 2){
            int aux = numbers[i];
            numbers[i] = numbers[i+1];
            numbers[i+1] = aux;
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i = 0; i < n; i++){
            numbers[i] = i + 1;
        }

        solve(n);

        for(int i = 0; i < n; i++) cout<<numbers[i]<<" ";
        cout<<endl;
    }
    return 0;
}