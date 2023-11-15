#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void insertionSort(vector<int>&arr, int i, int n){
    if(i==n-1)
        return ;
    int j = i;
        while(j>0 && arr[j] < arr[j-1])
        {
            swap(arr[j], arr[j-1]);
            j--;
        }
    insertionSort(arr, i+1, n);

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
    // for(int i=0; i<n; i++){
    //     int j = i;
    //     while(j>0 && arr[j] < arr[j-1])
    //     {
    //         swap(arr[j], arr[j-1]);
    //         j--;
    //     }
    // }
    
    // Recursive
    insertionSort(arr, 0, n);

    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";

    return 0;
}