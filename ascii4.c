#include<stdio.h>
int main(){
    char arr[]={'h','e','l','l','o',' ','w','o','r','l','d'};
    int i=0;
    while(arr[i]!='\0'){
        printf("%c",arr[i]);
        i++;
    }
    printf("\n");
}