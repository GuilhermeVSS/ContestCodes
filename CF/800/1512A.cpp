#include "bits/stdc++.h"

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int numbers[n];
        for(int i = 0; i < n; i++){
            cin>>numbers[i];
        }
        int ans;
        for(int i = 1; i < n - 1; i++){
            if(numbers[i-1] == numbers[i+1] && numbers[i] != numbers[i-1]) ans = i;
            else if(numbers[i] == numbers[i+1] && numbers[i-1] != numbers[i+1]) ans = i-1;
            else if(numbers[i] == numbers[i-1] && numbers[i-1] != numbers[i+1]) ans = i + 1;
        }
        cout<<ans+1<<endl;
    }
    return 0;
}