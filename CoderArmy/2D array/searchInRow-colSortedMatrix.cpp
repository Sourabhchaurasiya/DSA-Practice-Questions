#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        bool search(vector<vector<int>>matrix,int n,int m,int x){
            int row=0,col=m-1;
            while(row<n&&col>=0){
                if(matrix[row][col]==x)return 1;
                else if(matrix[row][col]<x)row++;
                else col--;
            }
            return 0;
        }
};