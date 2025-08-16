#include<iostream>
#include<vector>
using namespace std;


int find_missing(vector<int>& arr){
    int total_xor=0,arr_xor=0;
    int n=arr.size();

    for(int i=0;i<n;i++){
        total_xor^=i+1;
        arr_xor^=arr[i];
    }
    total_xor=total_xor^(n+1);

    return total_xor^arr_xor;
}

int main(){
    vector<int>arr={1,2,4,5};

    cout<<"Missing number : "<<find_missing(arr);
}
