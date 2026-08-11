#include<stdio.h>
int main(){
    char str[20];
    // scanf("%s",school); 
    
    gets(str);
    printf("%s\n",str);

    printf("we can also use puts to print the string\n");
    puts(str);

}
//scanf ka input me keval first word hi store hota hai, use gets to avoid.