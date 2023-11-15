#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(vector<int>&arr, int n){
    if(n==1)
        return ;

    for(int j=0; j<n-1; j++){
        if(arr[j]>arr[j+1])
            swap(arr[j], arr[j+1]);
    }
    bubbleSort(arr, n-1);

}
int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    cout<<"Enter array: ";
    vector<int>arr;
    int temp;
    for(int i=0; i<n; i++){
        cin>>temp;
        arr.push_back(temp);
    }

    // sorting logic
    
    // Iterative 
    // for(int i=n-1; i>=0; i--){
    //     for(int j=0; j<i; j++){
    //         if(arr[j] > arr[j+1])
    //             swap(arr[j], arr[j+1]);
    //     }
    // }
    
    // Recursive
    
    bubbleSort(arr, n);

    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";

    return 0;
}