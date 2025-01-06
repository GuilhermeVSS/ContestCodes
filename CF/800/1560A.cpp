#include "bits/stdc++.h"

using namespace std;
const int MAXN = 1e4+10;
int numbers[MAXN];


int main(){
    int number = 1;
    for(int i = 1; i < MAXN; i++){
        while(number%3 == 0 || number%10 == 3  ) number++;
        numbers[i] = number;
        number++;
    }

    int t;
    cin>> t;
    while(t--){
        int a;
        cin>>a;
        cout<<numbers[a]<<endl;
    }
    return 0;  
}