#include<bits/stdc++.h>
using namespace std;
int search(vector<int>&arr,int target){
    int start=0,end=arr.size()-1,mid;
    while(start<=end){
        mid=start+(end-start)/2;
        //target found
        if(arr[mid]==target)return mid;
        //left side sorted
        else if(arr[mid]>=arr[0]){
            if(arr[start]<=target&&arr[mid]>target)
            end=mid-1;
            else start=mid+1;
        }
        else {
            if(arr[mid]<target&&arr[end]>=target)
                start=mid+1;
            else 
                end=mid-1;
        }
        //right side sorted
    }
    return  -1;
}
int main(){
    return 0;
}