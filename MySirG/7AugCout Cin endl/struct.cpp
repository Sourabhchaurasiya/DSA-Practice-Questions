#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
struct Book{
    int bookid;
    char title[20];
    float price;
    void displayBook(){
        cout<<bookid<<"  "<<title<< "  "<<price<<endl;
    }
    void inputBook(){
        // Book b;
        cout <<"Enter bookid,Title and price:";
        cin>>bookid;
        cin.ignore();
        cin.getline(title,20);
        cin>>price;
         
    }
};

int main(){
    Book b1={1,"Drilling C",242.5},b2;
    Book b3;
    b2.bookid=2;
    strcpy(b2.title,"HelloMyLove");
    b2.price=244.0;
    b3.inputBook();
    b3.displayBook();
}

/*
struct Book{
    int bookid;
    char title[20];
    float price;
};
 Book inputBook();
void displayBook( Book );
int main(){
     Book b3, b2,b1={432,"Killing C++",352.0};
    b2.bookid=1;
    strcpy(b2.title,"Hello World");
    b2.price=245.0;
    b3=inputBook();
    displayBook(b3);
    return 0;
}
void displayBook( Book b){
    cout<<b.bookid<<" "<<b.title<< " "<<b.price<<endl;
}
 Book inputBook(){
     Book b;
    cout<<"Enter bookid,title and price:";
    cin>>b.bookid;
    cin.ignore();
    cin.getline(b.title,20);
    fflush(stdin);
    fgets(b.title,20,stdin);
    cin>>b.price;
    return b;

}
*/