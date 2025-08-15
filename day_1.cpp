#include<iostream>
#include<vector>
using namespace std;

void sorted_Arr(vector<int>& arr){

    int mid=0,low=0,high=arr.size()-1;

    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}

int main(){
    vector<int>arr={0,1,0,1,1,2,1,0,2};

    sorted_Arr(arr);
    for(auto it:arr){
        cout<<it<<" ";
    }
}
