#include<iostream>
using namespace std;
class Complex{
    private:
        int a,b;
    public:
        Complex (){a=0;b=0;}
        //Complex():a(0),b(0)
        Complex(int x){a=x;b=0;}
        Complex(int x,int y){a=x;b=y;}
       void setData(int ,int);
        void showData();
        Complex add(Complex C);
        Complex operator-(Complex );
        Complex operator-();
};
Complex Complex::operator-(Complex C){
    Complex temp;
    temp.a=a-C.a;
    temp.b=b-C.b;
    return temp;
}
Complex Complex::operator-(){
    Complex temp;
    temp.a=-a;
    temp.b=-b;
}
void Complex::showData(){
    cout<<"\na="<<a<<" b= "<<b;
}

 void Complex::setData(int x,int y){
            a=x;
            b=y;
}
Complex Complex::add(Complex C){
    Complex temp;
    temp.a=a+C.a;
    temp.b=a+C.b;
    return temp;
}
int main(){
    Complex c1(1,3),c2(2),c3;
    c1.setData(3,6);
    c2.setData(5,6);
    
    // c3=c1.add(c2);

    c3=c1-c2;
    c3.showData();
    c3=-c1;
    c3.showData();
    c1.showData();
    cout<<endl;
    return 0;
}