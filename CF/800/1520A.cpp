#include "bits/stdc++.h"

using namespace std;
map<char, int> mString;
string task;

int main(){
    int t;
    cin>> t;
    while(t--){
        int a;
        cin>>a;
        cin>>task;
        int count = 1;
        bool ans = true;
        for(auto w: task){
            if(!mString[w]) mString[w] = count++;
            else if(count-mString[w] >=2) {
                ans = false;
            }
        }
        cout<<(ans? "YES" : "NO")<<endl;
        mString.clear();
    }
    return 0;  
}