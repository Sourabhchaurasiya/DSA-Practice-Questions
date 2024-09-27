#include<bits/stdc++.h>
using namespace std;
class Item{
    private:
        int a,b;
    public:
        void setData(int a,int b){
            this->a=a;
            this->b=b;
        }
        void showData(){
            cout<<"a="<<a<<" b="<<b;
        }
        Item greater (Item obj){
            if(a+b>obj.a+obj.b)return *this;
            else return obj;
        }
};
int main(){
    Item i1,i2,i3;
    i1.setData(10,29);
    i2.setData(3,50);
    i3=i1.greater(i2);

    cout<<endl;
    
    return 0;
}   