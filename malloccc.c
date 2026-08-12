#include<stdio.h>
#include <stdlib.h>
int main(){
    int * ptr=(int*)malloc(10*sizeof(int));
    printf("%d",*ptr);
    
    printf("\n");

    int *memo=(int*)calloc(10,sizeof(int));
    printf("%d",*memo);

    printf("\n");
    free(ptr); //free the memory
    ptr=NULL; //set to the null to make its final address 0X0
}