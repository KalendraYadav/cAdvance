#include<stdio.h>
int main(){
    char school[20];

    printf("Enter the name of your school\n");

    gets(school);
    printf("%s\n",school);

    printf("we can also use puts to print the string\n");
    puts(school);

}
//scanf ka input me keval first word hi store hota hai, use gets to avoi