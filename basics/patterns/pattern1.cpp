/* Print following pattern
    *****
    *****
    *****
    *****
    *****
    input n
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n;
    cout<<"enter size: ";
    cin>>n;
    for(int i=0;i<n;i++) {
        for(int j=0; j<n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}