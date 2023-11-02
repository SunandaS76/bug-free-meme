/* Print following pattern
    12345
    1234
    123
    12
    1 
    input n
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=n; j>=i; j--){
            cout<<n-j+1;
        }
        cout<<endl;
    }
    return 0;
}
