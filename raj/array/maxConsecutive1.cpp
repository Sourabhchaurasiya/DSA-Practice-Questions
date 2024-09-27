#include<bits/stdc++.h>
using namespace std;
int findMaxConsecutiveOnes(vector<int>&nums){
    int maxi=0;
    int cnt=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==1)
    maxi=max(maxi,cnt);
    
    else{
        cnt=0;
    }
  }
    return maxi;
}