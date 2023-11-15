#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
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

    for(int i=0; i<n; i++){
        int min = i;
        for(int j=i+1; j<n-1; j++){
            if(arr[j] < arr[min])
                min = j;
        }
        swap(arr[i], arr[min]);
    }

    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";

    return 0;
}