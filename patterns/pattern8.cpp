/* Print following pattern
*********
 *******
  *****
   ***
    *
    input n
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
   
    for(int i=n; i>=1; i--){
        for(int j=n-1; j>=i; j--){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        for(int j=2; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
