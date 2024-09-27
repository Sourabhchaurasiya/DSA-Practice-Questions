#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        void rotate(vector<vector<int>>&matrix){
            int n=matrix.size();
            for(int j=0;j<n;j++){
                int start=0,end=n-1;
                while(start<end){
                    swap(matrix[start][j],matrix[end][j]);
                    start++,end--;
                }
            }
            for(int i=0;i<n;i++){
                int start=0,end=n-1;
                while(start<end){
                    swap(matrix[i][start],matrix[i][end]);
                    start++,end--;
                }
            }
        }
};
//
void rotate(vector<vector<int> >&mat){
    int n=mat[0].size();
    int k=0,max=(n*n)/2;
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++){
        k++;
        int temp=mat[n-1-i][n-1-j];
        mat[n-1-i][n-1-j]=mat[i][j];
        mat[i][j]=temp;
        if(k==max)return ;
    }
};