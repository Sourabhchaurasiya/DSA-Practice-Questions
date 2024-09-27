#include<iostream>
using namespace std;
class Item{
    private:
        int a,b;//Instance Variable
        static int k;//Static member variable//class variable
    public:
        void set_a(int x){a=x;}//Instance Method
        void set_b(int y){b=y;}//Instance method
        int get_a(){return a;}
        int get_b(){return b;}
        static void set_k(int m){k=m;}//Static method
        static int get_k(){return k;}
};
int main(){
    Item::set_k(19);
    cout<<"k="<<Item::get_k();
    cout<<endl;
    return 0;
}