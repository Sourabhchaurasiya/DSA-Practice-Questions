#include<iostream>
using namespace std;
int addDigits(int);
int addDigits(int num){
    while(num>9){
        int ans=0,rem;
        while (num!=0){
            rem=num%10;
            num/=10;
            ans+=rem;
        }
        num=ans;
        
    }
    return num;
}
int main(){
   int s= addDigits(23344);
   cout<<"Digit Sum is "<< s;
    return 0;
}