#include<stdio.h>

int main(){
    char arr[5]={'a','b','c','d','e'};
    printf("%c\n",arr[4]);
    printf("%p\n",&arr[0]); //address of first element
    printf("%p\n",&arr[1]); //address of first element
    printf("%p\n",&arr[2]); //address of first element
    printf("%p\n",&arr[3]); //address of first element
    printf("%p\n",&arr[4]); //address of first element


    for(int i=0;i<5;i++){
        printf("%c\n",arr[i]);
    }
    return 0;
}