#include<iostream>
using namespace std;
int isLeap(int );
int isLeap(int N){
    if(N%400==0){
        return 1;
    }
    else if(N%4==0&& N%100!=0){
        return 1;
    }
    else return 0;
}
int main(){
    int s=isLeap(2024);
    cout<<s;
    return 0;
}