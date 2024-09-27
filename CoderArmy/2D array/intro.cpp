#include<bits/stdc++.h>
using namespace std;

 
void printcol(int arr[][4],int row,int col){
    for(int j=0;j<col;j++)
    for(int i=0;i<row;i++)
    cout<<arr[i][j]<<" ";
}


int main(){
    // int arr[3][4]={3,4,5,3,2,6,7,8,5,7,3,5};
    // for(int i=0;i<=2;i++){
    //       for(int j=0;j<=3;j++){
    //         cout<<arr[i][j]<<' ';
    //     }
            
    //      cout<<endl;
    // }
    // printcol(arr,3,4);
      
    //   int x=3;
    //   for(int i=0;i<2;i++)
    //     for(int j=0;j<3;j++){
    //         if(arr[i][j]==x){
    //             cout<<"yes";
    //             break;
    //         
    //   }
    //   cout<<"no";
    //  int matrix[3][3]={1,2,3,4,5,6,7,8,9};
    //  printsumdiag(matrix,3,3);
    //print Diagonal Sum

    int arr1[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int arr2[3][4]={0,1,3,4,5,6,8,5,3,23,65,34};
    int ans[3][4];


}
void wave(int arr[][4],int row,int col){
    for(int j=0;j<col;j++){
        if(j%2==0){
            for(int i=0;i<row;i++)
            cout<<arr[i][j]<<" ";
        }
        else{
            for(int i=row-1;i>=0;i--)
            cout<<arr[i][j]<<" ";
        }
    }
}

// void printsumdiag(matrix[][3],int row,int col){
 

   
   
//        int first=0;
//     int second=0;
//     //first diag sum
//     int i=0;
//     while(i<3){
//         first+=matrix[i][i];
//     }
//      i=0;int j=2;
//     while(j>=0){
//         second+=matrix[i][j];
//         i++,j--;
//     }
//     cout<<first<<" "<<second<<endl;
//      return 0;
// }