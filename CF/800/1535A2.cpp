#include "bits/stdc++.h"

using namespace std;

int main(){
    int t;
    cin>>t;
    int vec[4];
    while(t--){
        for(int i = 0; i < 4; i++){
            cin>>vec[i];
        }

        int previousMax = 0;
        int currentMax = 0;
        int posCurrent = 0;
        int posPrevious = 0;

        for(int i = 0; i < 4; i++){
            if(vec[i] > currentMax){
                previousMax = currentMax;
                currentMax = vec[i];

                posPrevious = posCurrent;
                posCurrent = i;
            }
            else if(vec[i] > previousMax){
                previousMax = vec[i];
                posPrevious = i;
            }
        }

        if(abs(posPrevious - posCurrent) != 1 || (min(posPrevious, posCurrent) == 1 && max(posPrevious, posCurrent) == 2)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;  
}