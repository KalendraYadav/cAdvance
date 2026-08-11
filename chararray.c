#include<stdio.h>
int main(){
    //store hello world
    char arr[12]={'h','e','l','l','o',' ','w','o','r','l','d','\0'};
    for(int i=0;i<12;i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}