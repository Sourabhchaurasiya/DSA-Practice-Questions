#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>&nums){
    int candidate,count=0,n=nums.size();
    for(int i=0;i<n;i++){
        if(count==0){
            count=1;
            candidate=nums[i];
        }
        else{
            if(candidate==nums[i]) count++;
            else count--;
        }
    }
    return -1;
}
//gfg
int majorityElement(int a[],int size){
    int count=0,element=-1;
    for(int i=0;i<size;i++){
        if(count==0){
            count++;
            element=a[i];
        }
        else {
            if(element==a[i])count++;
            else count--;
        }
    }
    count=0;
    for(int i=0;i<size;i++){
        if(a[i]==element)count++;
    }
    return count>size/2?element:-1;
}