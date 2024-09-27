#include<bits/stdc++.h>
using namespace std;
vector<int>spiralOrder(vector<vector<int>>&matrix){
    vector<int>ans;
    int row=matrix.size(),col=matrix[0].size();
    int top=0,bottom=row-1,left=0,right=col-1;
    while(left<=right&&top<=bottom){
        for(int j=left;j<=right;j++)
        ans.push_back(matrix[top][j]);
        top++;

        for(int i=top;i<=bottom;i++)
        ans.push_back(matrix[i][right]);
    }
}

int main(){
    return 0;
}