#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MAXN = 1e9 + 10;

vector<string> ansG;

map<char, string> myMap;


void solve(string t, string ans){
    if(!t.size()) {
        ansG.push_back(ans);
        return;
    };

    for(auto w : myMap[t[0]]){
        ans.push_back(w);
        solve(t.substr(1), ans);
        ans.pop_back();
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    myMap['2'] = "abc";
    myMap['3'] = "def";
    myMap['4'] = "ghi";
    myMap['5'] = "jkl";
    myMap['6'] = "mno";
    myMap['7'] = "pqrs";
    myMap['8'] = "tuv";
    myMap['9'] = "wxyz";

    string t;
    cin>>t;
    string emp = "";
    solve(t, emp);
    
    for(auto w: ansG) cout<<w<<" ";
    cout<<endl;
    return 0;
}