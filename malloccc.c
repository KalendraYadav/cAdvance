#include<stdio.h>
#include <stdlib.h>
int main(){
    int * ptr=(int*)malloc(10*sizeof(int));
    printf("%d",*ptr);
    
    printf("\n");

    int *memo=(int*)calloc(10,sizeof(int));
    printf("%d",*memo);

    printf("\n");
}