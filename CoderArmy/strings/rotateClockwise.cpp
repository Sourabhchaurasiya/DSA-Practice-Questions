#include<bits/stdc++.h>
using namespace std;
bool isRotated(string str1,string str2){
    if(str1.size()!=str2.size())return 0;
    string clockwise,anticlockwise;
    clockwise=str1;
    rotate_clockwise(clockwise);
    rotate_clockwise(clockwise);
    if(clockwise==str2)return 1;
    anticlockwise=str1;
    rotate_anti_clockwise(anticlockwise);
    rotate_anti_clockwise(anticlockwise);
    if(anticlockwise==str2)return 1;
    return 0;
}
void rotate_clockwise(string &s){
    char c=s[s.size()-1];
    int index=s.size()-2;
    while(index>=0){
        s[index+1]=s[index];
        index--;
    }
    s[0]=c;
}
void rotate_anti_clockwise(string &s){
    char c=s[0];
    int index=1;
    while(index<s.size()){
        s[index-1]=s[index];
        index++;
    }
    s[s.size()-1]=c;
}