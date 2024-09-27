#include<bits/stdc++.h>
using namespace std;
//O(N^2)
class Solution{
    public:
        bool hasArrayTwoCandidates(int arr[],int n,int x){
            for(int me=0;me<n;me++){
                for(int frnd=me+1;frnd<n;frnd++){
                    if(arr[me]+arr[frnd]==x)return true;
                }
            }
            return false;
        }
};
//O(N)
class Solution{
    public:
  bool hasArrayTwoCandidates(int arr[],int n,int x){
    int my_memory[100001]={0};
    for(int me=0;me<n;me++){
        int curr_num=arr[me];
        int req_num=x-curr_num;
        if(req_num<=100000&& req_num>0&& my_memory[req_num]==1){
                return true;
        }
        my_memory[curr_num]=1;
    }
    return false;
  }
};