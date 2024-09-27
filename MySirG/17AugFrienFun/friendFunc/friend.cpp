// #include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Item{
    private:
        int a,b;
    public:
    void setData(int x,int y){a=x;b=y;}
    void showData(){cout<<"a="<<a<<" b="<<b;}
        friend void f1(Item);
        friend Item operator+(Item ,Item); 
        friend Item operator-(Item);      
        // Item operator+(int ) ;
        friend Item operator+(int ,Item);
        friend istream& operator>>(istream&,Item &);
        friend ostream& operator<<(ostream&,Item);
};
Item operator+(int k,Item i){
    Item temp;
    temp.a=i.a+k;
    temp.b=i.b;
    return temp;
}
Item operator +(Item X,Item Y){
    Item temp;
    temp.a=X.a+Y.a;
    temp.b=X.b+Y.b;
    return temp;
}
Item operator-(Item i){
    Item temp;
    temp.a=-i.a;
    temp.b=-i.b;
    return temp;
}
void f1(Item i){
    int c=i.a+i.b;
    cout<<"Sum is"<<c;
    
} 

istream& operator>>(istream &din,Item &i){
    din>>i.a>>i.b;
    return din;
}
ostream& operator<<(ostream &dout,Item i){
    dout<<"a="<<i.a<<" b="<<i.b;
    return dout;
}
int main(){
    Item i1,i2,i3;
    // i1.setData(3,4);   
    // i2.setData(9,4);
    // i3=i1+i2;//operator + has been called with argument i1 and i2 and its value is returned to i3
    // cout<<"Enter an item :";
    // i3=4+i2;
    // i3.showData();
    // f1(i1);
    // cout<<i1;
    // cin>>i1;
    cout<<"Enter an item:  ";
    cin>>i1;
    cout<<i1;
    cout<<endl;
    return 0;
}