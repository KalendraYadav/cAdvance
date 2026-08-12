#include<stdio.h>
int main(){
    int a,b;
    char ch;
    printf("enter the number 1  ");
    scanf("%d",&a);
    printf("enter the second number   ");
    scanf("%d",&b);
    printf("entere the operator ");
    scanf(" %c",&ch); //a space before %c to consume any whitespace characters
    switch(ch){
        case'+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case'*':
        printf("%d",a*b);
        break;
        case'/':
        printf("%f",(float)(a/b));
        break;

        default:
        printf("invalid operator");
    }
}