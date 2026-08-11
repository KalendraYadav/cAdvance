#include<stdio.h>
int main(){
    char arr[]="hello i am kalendra";

    arr[0]=97; //97 means a will be assigned

    int i=0;
    while(arr[i]!='\0'){
        // printf("%c",arr[i]);
        // printf("%c",i[arr]); //this is also valid
        printf("%c",*(arr+i)); //this is also valid
        i++;
    }
    printf("\n");
}