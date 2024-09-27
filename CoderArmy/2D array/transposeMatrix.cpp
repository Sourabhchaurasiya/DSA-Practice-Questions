#include<bits/stdc++.h>
using namespace std;
int main(){
    return 0;
}
void transpose(vector<vector<int>>&matrix,int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
}