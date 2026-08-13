#include<stdio.h>
int main(){
    // char str[]="kalendra yadav is powerful\0";
    char str[]="kalendra yadav is powerful";
    int i=0;

    printf("%c\n",str[4]);

    printf("%d\n",str[4]); //ascii value 
    str[0]='p'; //change the value of str[0] from k to p
    while(str[i]!='\0'){
        printf("%c",str[i]);
        i++;
    }
    printf("\n");
}