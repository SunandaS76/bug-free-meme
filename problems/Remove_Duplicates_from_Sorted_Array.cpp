#include<bits/stdc++.h>
using namespace std;


int removeSortedArray(vector<int>&arr){
    unordered_set<int>s ;
    for(auto i: arr){
        s.insert(i);
    }
    return s.size();
}

int main(){
    vector<int>arr = {1, 2, 3, 3, 4, 5};
    int n = 5;
    cout<<removeSortedArray(arr)<<endl;
    return 0;
}