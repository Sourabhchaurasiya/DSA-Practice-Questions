#include<bits/stdc++.h>
using namespace std;
int main(){
    // char arr[]={'I','t','s',' ','M','i','n','e'};
//taking input as a sentance
    // string s;
    // getline(cin,s);
    // cout<<s;

//reversing the string
    string s="Sourabh Chaurasiya";
    int start=0,end=s.size()-1;
    while(start<=end){
        swap(s[start],s[end]);
        start++,end--;
    }
    cout<<s<<endl;
//finding length
    int size=0;
    while(s[size]){
        size++;
    }
    cout<<size<<" "<< endl;
    

    string s2="RahaR";
    start=0,end=s2.size()-1;
    while(start<end){
        if(s2[start]!=s2[end]){
            cout<<"Not a Palindrome";
            return 0;
        }
        start++,end--;
    }
    cout<<"It is a Palindrome";
}