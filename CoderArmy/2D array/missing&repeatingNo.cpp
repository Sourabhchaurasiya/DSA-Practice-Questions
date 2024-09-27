#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int>findMissingAndRepeatingValues(vector<vector<int>>&grid){
        int n=grid.size();
        int max=n*n;
        int repeating,missing;
        vector<int>list(max,0);
        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            list[grid[i][j]-1]++;
        for(int num=1;num<=max;num++){
            if(list[num-1]==0)missing=num;
            if(list[num-1]>1)repeating=num;
        }
         return {repeating,missing};
    }
};
//gfg
vector<int>findTwoElement(vector<int>arr,int n){
    for(int i=0;i<n;i++)
    arr[i]--;
    for(int i=0;i<n;i++)
        arr[arr[i]%n]+=n;
    vector<int>ans(2);
    for(int i=0;i<n;i++){
        if(arr[i]/n==2)ans[0]=i+1;
        else if(arr[i]/n==0)ans[1]=i+1;
    }
    return ans;
}