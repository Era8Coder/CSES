#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

// Below is the link for the detailed mathematical solution for two knights problem !!  
/* https://www.geeksforgeeks.org/cses-solutions-two-knights/ */

int main(){
    ll n;  cin >> n;   
    for(int i=1; i<=n; i++){
        ll total_ways = (ll)i*i*(i*i-1)/2;      // here the game happens -> if you will not use (ll) then your all test cases will not pass 
        /*
            :-> TYPECASTING <-: 
            -> (ll)i -> converts i to a long long before any calculation => you can initiate "i" as long long in it's initialisation in the total_ways formula
            -> typecast is used to prevent overflow or precision issues when multiplying large integers 
        */
        ll attacking_ways = 4*(i-1)*(i-2);
        cout << total_ways - attacking_ways << endl;
    }
    return 0;
}