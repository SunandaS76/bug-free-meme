/* Print following pattern
* * * * * * * * * * 
* * * *     * * * * 
* * *         * * * 
* *             * * 
*                 * 
*                 * 
* *             * * 
* * *         * * * 
* * * *     * * * * 
* * * * * * * * * * 
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
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        for(int j=i; j<n; j++){
            cout<<"  ";
        }
        for(int j=i; j<n; j++){
            cout<<"  ";
        }
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int i=2; i<=n+1; i++){
        for(int j=n; j>=i; j--){
            cout<<"* ";
        }
        for(int j=i; j>1; j--){
            cout<<"  ";
        }
        for(int j=1; j<i; j++){
            cout<<"  ";
        }
        for(int j=i; j<=n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
