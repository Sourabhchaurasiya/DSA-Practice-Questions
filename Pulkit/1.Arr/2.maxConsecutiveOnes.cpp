#include<bits/stdc++.h>
using namespace std;
int main(){
    return 0;
}
//O(N^2)
int findMaxConsecutiveOnes(vector<int>& arr){
    int final_ans=0,n=arr.size();
    for(int l=0;l<n;l++){
        int num_of_zeroes=0;
        for(int r=l;r<n;r++){
            if(arr[r]==0)num_of_zeroes++;
            if(num_of_zeroes==0)
                final_ans=max(final_ans,r-l+1);
        }
    }
    return final_ans;
}
//O(N)
int findMaxConsecutiveOnes(vector<int>& arr){
    int final_ans=0,cur_count=0;
    for(int num:arr){
        if(num==1)cur_count++;
        else cur_count=0;
        final_ans=max(final_ans,cur_count);
    }
    return final_ans;
}