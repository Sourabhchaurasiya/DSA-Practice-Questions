#include<iostream>
using namespace std;

class Complex{
    private:
        int a,b;
    public:
        
        void setData(int ,int );
        void showData();
        Complex add(Complex);
        Complex operator+(Complex);
        Complex operator-(Complex);
            // cout<<"a= "<<a<<"b= "<<b; 
        
};
void Complex:: setData(int x,int y){
    a=x;
    b=y;
}
Complex Complex::operator +(Complex C){
    Complex temp;
    temp.a=a+C.a;
    temp.b=b+C.a;
    return temp;
}
Complex Complex::operator -(Complex C){
    Complex temp;
    temp.a=a-C.a;
    temp.b=b-C.b;
    return temp;
}
void Complex::showData(){
    cout<<"\na="<<a<<" b="<<b;
}
// Complex Complex::add(Complex C){
//     Complex temp;
//     temp.a=a+C.a;
//     temp.b=b+C.b;
//     return temp;
// }
int main(){
    Complex c1,c2,c3;
    c1.setData(3,4);
    c2.setData(5,6);
    c3= c1.add(c2);
    c3=c1-c2;
    c3.showData();
    cout<<endl;
    return 0;

}