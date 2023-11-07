/* Print following pattern
    *
   ***
  *****
 *******
*********
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
    for(int i=1; i<=n; i++){
        for(int j=n-1; j>=i; j--){
            cout<<"  ";
        }
        char k = 'A';
        for(int j=1; j<=i; j++){
            cout<<k<<" ";
            k++;
        }
        k--;
        for(int j=2; j<=i; j++){
            k--;
            cout<<k<<" ";
            
        }
        cout<<endl;
    }

    return 0;
}
