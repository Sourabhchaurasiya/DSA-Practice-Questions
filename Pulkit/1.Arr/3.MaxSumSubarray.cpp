#include<bits/stdc++.h>
using namespace std;
long maximumSumSubarray(int K,vector<int>&arr,int N){
    long cur_sum=0;
    for(int i=0;i<K;i++)
        cur_sum+=arr[i];
    long max_sum=cur_sum;

    for(int st=1,en=K;en<N;st++,en++){
        cur_sum-=arr[st-1];
        cur_sum+=arr[en];
        max_sum=max(max_sum,cur_sum);
    }
    return max_sum;
}