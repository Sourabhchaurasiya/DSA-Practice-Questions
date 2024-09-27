#include<stdio.h>
void stringCombinations(char str[],int r){
    int i,j,k;
    char temp[r+1];
    for(i=0;i<=5-r;i++){
        temp[0]=str[i];
        for(j=i+1;j<=5-r+1;j++){
            temp[1]=str[j];
            for(k=j+1;k<=5-r+2;k++){
                temp[2]=str[k];
                temp[3]='\0';
                printf("%s\n",temp);
            }
        }
    }
}

 int main(){
    char str[]="ABCDE";
    char **p;
    stringCombinations(str,3);
    return 0;
 }