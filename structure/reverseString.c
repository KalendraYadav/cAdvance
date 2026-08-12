//take input and print reverse of the string
#include<stdio.h>
int main(){
    char str[15];
    puts("Enter the string");
    gets(str);

    //print the size of the string
    // puts("the size of the string is");
    int size=0;
    int i=0;
    while(str[i]!='\0'){
        size++;
        i++;
    }
    // printf("the size of the string is %d\n",size);

    for(int i=0,j=size-1;i<j;i++,j--){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }

    puts("the reversed string is");
    puts(str);

}