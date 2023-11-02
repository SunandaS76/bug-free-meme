// Switch case example

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int day ;
    cout<<"enter day ";
    cin>>day;
    switch(day){
        case 1 :
        cout<<"monday";
        break;

        case 2 :
        cout<<"tuesday";
        break;

        case 3:
        cout<<"wednsday";
        break;

        default :
        cout<<"holdiday";
    }

    return 0;
}