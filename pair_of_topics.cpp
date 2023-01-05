// problem
// https://codeforces.com/problemset/problem/1324/D


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[10], b[10];
    for (int i=0; i<n; i++){
        cin>>a[i];
    }
    for (int i=0; i<n; i++){
        cin>>b[i];
    }
    int cnt = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if((a[i] + a[j]) > (b[i] + b[j]))
                cnt++;
        }
    }
    cout<<cnt;
}

// test cases

//5
//4 8 2 6 2
//4 5 4 1 3
