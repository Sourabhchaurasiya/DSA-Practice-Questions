#include <bits/stdc++.h>
using namespace std;
int main()
{
    return 0;
}
//t.c(O(N)),s.c(O(N))
int trap(vector<int>&height){
    int n=height.size();
    if(n==0)return 0;
    vector<int>left(n),right(n);
    left[0]=height[0];
    for(int i=1;i<n;i++)left[i]=max(left[i-1],height[i]);
    right[n-1]=height[n-1];
    for(int i=n-2;i>=0;i--)right[i]=max(right[i+1],height[i]);
    int trappedWater=0;
    for(int i=0;i<n;i++)trappedWater+=min(left[i],right[i])-height[i];
    return trappedWater;
}
//T.c-O(N),S.c-O(1)
int trap(vector<int>&height){
    int n=height.size();
    int leftmax=0,rightmax=0,water=0,maxheight=height[0],index=0;
    for(int i=1;i<n;i++){
        if(maxheight<height[i]){
            maxheight=height[i];
            index=i;
        }
    }
    //left part
    for(int i=0;i<index;i++){
        if(leftmax>height[i])
            water+=leftmax-height[i];
        else leftmax=height[i];
    }
    //right part
    for(int i=n-1;i>index;i--){
            if(rightmax>height[i])
                water+=rightmax-height[i];
            else rightmax=height[i];
        }
        return water;
}