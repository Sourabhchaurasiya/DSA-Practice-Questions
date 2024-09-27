#include<bits/stdc++.h>
using namespace std;
 int missingNumber(vector<int>&nums){
    int n=nums.size();
    for(int i=0;i<=nums.size();i++){
        bool found=false;
        for(int id=0;id<nums.size();id++){
            if(nums[id]==i){
                found=true;
                break;
            }
        }
        if(found==false)return i;
    }
    return -1;
 }