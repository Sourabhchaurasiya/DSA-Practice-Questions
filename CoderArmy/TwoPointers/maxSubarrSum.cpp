#include<bits/stdc++.h>
using namespace std;
int main(){
    return 0;
}
long long maxSubarraySum(int arr[],int n){
    long long maxi=INT_MIN,prefix=0;
    for(int i=0;i<n;i++){
        prefix+=arr[i];
        maxi=max(maxi,prefix);
        if(prefix<0)prefix=0;
    }
    return maxi;
}