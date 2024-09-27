#include<iostream>
using namespace std;
class Item{
    private:
        int a,b;
        static int k;
    public: 
        void set_a(int x){a=x;}
        void set_b(int y){b=y;}
        int get_a(){return a;}
        int get_b(){return b;}
        static void set_k(int m){k=m;}
        static int get_k(){return k;}
};
int Item::k;
int main(){
    Item i1,i2;
    i1.set_a(5);
    cout<<i2.get_a()<<endl;
    // Item::k=10;
    // i1.set_k(10);
    Item::set_k(10);
    // cout<<"K="<<Item::k;
    // cout <<"k= "<<i2.get_k();
    cout<<"k="<<Item::get_k();
    cout<<endl;
    return 0;
}









// void f1();
//     int main(){
//         f1();
//         printf("\n");
//         return 0;
//     }

// void f1(){
//     int x=5;
//     static int y;
//     x++;
//     prinf(" x=%d y=%d ",x,y);
// }