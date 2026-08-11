#include<stdio.h>
int main(){
    char name[]={'k','a','l','e','n','d','r','a','\0'};
    int i=0;
    while(name[i]!='\0'){
        printf("%c",name[i]);
        i++;
    }
    printf("\n");
}