#include<bits/stdc++.h>
using namespace std;
int main(){
    return 0;
}
   bool find3Numbers(int A[],int n,int X){
        for(int i=n-2;i>=0;i--){
            for(int j=0;j<=i;j++){
                if(A[j]>A[j+1])
                    swap(A[j],A[j+1]);
            }
        }
        for(int i=0;i<n-2;i++){
            int ans=X-A[i];
            int start=i+1,end=n-1;
            while(start<end){
                if(A[start]+A[end]==ans)return 1;
                else if(A[start]+A[end]>ans)end--;
                else start++;
            }
        }
        return 0;
     
}
