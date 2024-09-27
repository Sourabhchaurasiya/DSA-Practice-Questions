#include<iostream>
using namespace std;
inline int square(int);
inline int add(int,int ,int =0);
int main(){
    int x,y;
    int a,b;
    cin>>a>>b;
    cout<<"Enter a Number";
    cin>>x;
    y=square(x);
    cout<<"The square of "<<x <<" is "<<y;
    cout<<endl;
    cout<<"Sum is "<<add(a,b);
    int c;
    cin>>c;
    cout<<"Sum of three no. is"<<add(a,b,c);
    
    return 0;
}
int square(int a){
    return a*a;
}
int add(int x,int y,int z){
    return x+y+z;
}

/*#include<iostream>
using namespace std;
int main(){
    int x,y;
     cout<<"Enter a no.";
     cin>>x;
    y=x*x;
     cout<<"The square of "<<x<<" is "<<y;
    cout<<"\n" <<endl;
    return 0;
}
*/









/*
#include<stdio.h>
int main(){
    int x,y;
    printf("ENter a number");
    scanf("%d  ",&x);
    y=x*x;
    printf("the Square of %d number is %d",x,y);
    printf("\n");
    return 0;
}*/