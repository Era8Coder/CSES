#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    // int n;   -> int n => Will result in Time limit Exceeded or <-> Wrong Answer
    /*
        It's very important you intialize with "Long Long" in starting Only
        for that use :->
            => typedef long long ll;           -> in header Files to prevent repeatitive use of "long long"
    */
    long long n;  cin >> n;     
    while(n != 1){
        cout << n << endl;
        if(n%2 == 0){
            n = n/2;
        }else{
            n = n*3 + 1;
        }
    }
    cout << 1 << endl;
    return 0;
}