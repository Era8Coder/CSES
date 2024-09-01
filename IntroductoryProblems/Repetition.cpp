#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;   cin>>s;
    int n = s.size();
    char par = 'Z';
    /*
        Very Important To initialise ans,curr with 1 becoz minimum size of different character = 1 :))
    */
    int ans = 1;
    int curr = 1;
    // I have to just check A,C,G,T <<-- Why there is the need of "Z" <=> It's treating as parent :))  
    for(int i=0; i<n; i++){
        if(s[i] == par){
            curr++;
            ans = max(curr,ans);
        }else{
            par = s[i];
            curr= 1;            // current_size = 1
        }
    }
    cout << ans << endl;
    return 0;
}