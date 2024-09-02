#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;  cin >> n;
    if(n == 1){                     // Case of No solution when difference is less than or equal to one
        cout << 1 << endl;
    }else if(n == 2 || n==3){
        cout << "NO SOLUTION" << endl;
    }
    // else if(n == 4){         
    //     cout << "2 4 1 3" << endl;
    // }
    /*
        -->>
        There's special reason that why I had commented upper Else if and below For Loop ;) 
        <<--
    */
    else{
        // for(int i=1; i<=n; i=i+2){      // Case of Odd Numbers :))
        //     cout << i << " ";
        // }
        // Case of even numbers :)) 
        if(n%2 == 0){                  // printing if order is even    
            for(int j=2; j<=n; j=j+2){
                cout << j << " ";
            }
        }else{                        // printing if order is odd 
            for(int j=2; j<=n; j=j+2){
                cout << j << " ";
            }            
        }
        for(int i=1; i<=n; i=i+2){      // Case of Odd Numbers :))
            cout << i << " ";
        }
    }
    /*
        -->>
        (: Time doesn't heal anything :)
        (: It just Teaches You how to live with Pain :)
        <<--
    */
    return 0;
}