#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    // Sometimes using Basic Maths is more important than any Top Level Logic :))
    /*
        a) Always try to do problem with "Frequency Array" when 1 <= a[i] <= n -->> If Mentioned in the Problem <<--
        b) -->> Or You can try using Sum Property <<-- 
    */
    ll n;  cin>>n;
    ll sum = n*(n+1)/2;
    vector<int> v(n-1);
    ll val = 0;
    ll x;
    for(int i=0; i<n-1; i++){
        cin >> v[i];
        val += v[i];
    }   
    cout << sum - val << endl; 
    return 0;
}