#include<bits/stdc++.h>
using namespace std;
//T.c(O(N^2)) S.c(O(1))
long long int invCount(vector<long long >&arr,int n){
    long long n=arr.size();
    long long  res=0;
    for(int i=0;i<n-1;i++){
        for(long long j=i+1;j<n;j++){
            if(arr[i]>arr[j])res++;
        }
    }
    return res;
}
//T.C.O(N*log N) S.C(O(n))
class mergesort{
  public:
  long long count=0;
  void divide(vector<long long>& arr,long long left,long long right){
      if(left>=right) return;
      long long middle=left+(right-left)/2;
      divide(arr,left,middle);
      divide(arr,middle+1,right);
      sortarray(arr,left,middle,right);
  }
  void sortarray(vector<long long>& arr,long long left,long long middle,long long right){
      long long a1=middle-left+1;
      long long a2=right-middle;
      vector<long long> arr1,arr2;
      for(long long i=left;i<=middle;i++) {
         arr1.push_back(arr[i]);
      }
      for(long long i=middle+1;i<=right;i++) arr2.push_back(arr[i]);
      
      long long i=0,j=0,k=left;
      while(i<a1 && j<a2){
          if(arr1[i]<=arr2[j]){
              arr[k]=arr1[i];
              i++;
          }
          else{
              arr[k]=arr2[j];
              j++;
          }
          k++;
      }
      while(i<a1){
          arr[k]=arr1[i];
          i++;
          k++;
      }
      while(j<a2){
          arr[k]=arr2[j];
          j++;
          k++;
      }
      i=0;j=j=0;
      while(i<a1 && j<a2){
          if(arr1[i]>arr2[j]){
              count+=(a1-i);
              j++;
          }
          else{i++;}
      }
  }
};
class Solution {
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
      long long int inversionCount(vector<long long> &arr) {
        mergesort merg;
        merg.divide(arr,0,arr.size()-1);
        return merg.count;
    }
};