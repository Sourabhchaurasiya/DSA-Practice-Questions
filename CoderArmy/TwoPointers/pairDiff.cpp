#include<bits/stdc++.h>
using namespace std;
int main(){
    return 0;
}
int solve(vector<int>&A,int B){
    sort(A.begin(),A.end());
    int start=0,end=1,n=A.size();
    if(B<0)B=B*-1;
    while(end<n){
        if(A[end]-A[start]==B)return 1;
        else if(A[end]-A[start]<B)end++;
        else start++;
        if(start==end)end++;
    }
    return 0;
}