#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int currNum=arr[i],j=i-1;
        while(j>=0&&arr[j]>currNum){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=currNum;
    }

}