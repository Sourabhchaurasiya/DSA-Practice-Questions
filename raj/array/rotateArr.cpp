#include<bits/stdc++.h>
using namespace std;
vector<int>rotateArray(vector<int>&arr,int n){
    int temp=arr[0];
    for(int i=1;i<n;i++)
    arr[i-1]=arr[i];
    arr[n-1]=temp;
    return arr;
}
//
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        vector<int>temp;
        for(int i=n-k;i<n;i++)
            temp.push_back(nums[i]);
        for(int i=n-k-1;i>=0;i--)
            nums[i+k]=nums[i];
        for(int i=0;i<k;i++)
            nums[i]=temp[i];
    }
};
//
void leftRotate(int arr[],int n,int d){
    d=d%n;
    int temp[d];
    for(int i=0;i<d;i++)temp[i]=arr[i];
    for(int i=d;i<n;i++)arr[i-d]=arr[i];
    for(int i=n-d;i<n;i++)arr[i]=temp[i-(n-d)];
}
//optimal
void leftRotate(int arr,int n,int d){
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
}
void reverse(int arr[],int start,int end){
    while(start<=end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}