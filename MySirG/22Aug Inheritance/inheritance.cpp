#include<bits/stdc++.h>
using namespace std;
int main(){
    Person p1;
    return 0;
}
class Person{
    private:
        int age;
        char name[20];
    protected:
        void setAge(int a){age=a;}
        void setName(char n[]){
            strcpy(name,n);
        }
    public:
        int getAge(){return age;}
        char*getName(){return name;}
};
class Employee:public Person{
    private:
        float salary;
    public:
        void setEmployee(int a,char n[],float s){
            setAge(a);
            setName(n);
            salary=s;
        }
};