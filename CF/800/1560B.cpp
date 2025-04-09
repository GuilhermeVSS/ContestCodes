#include "bits/stdc++.h"

using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int a, b, c;
        cin>>a>>b>>c;

        int diff = abs(a-b);
        int maxNumber = abs(a-b) * 2;
        if((abs(a-b) == 1 && min(a,b) != 1)  || (max(a, b) >  maxNumber  || c > maxNumber)) {
            cout<<-1<<endl;
            continue;
        }
        if(c > maxNumber/2) cout<<c - diff<<endl;
        else cout<< c +  diff<<endl;
    }
}