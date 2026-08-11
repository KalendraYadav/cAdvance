#include<stdio.h>
#include<string.h>
int main(){
    char naam[]="hello kalendra";
    printf("%p\n",naam);


    //or

    char *ptr1=naam;
    printf("%p\n",ptr1);
   
         //or

    char *ptr2=&naam[0];
    printf("%p\n",ptr2);    
    
    
    //different programme 

    char hello[]="samta shool";


    char *ptr =hello;
    printf("%p\n",ptr);
}