#include<stdio.h>
#include<stdlib.h>
int main(){
    int* ptr=(int*) calloc(10,4);
    printf("%p\n",&(*ptr));

    ptr=realloc(ptr,20*sizeof(int)); //reallocation of memory
    printf("%p\n",&(*ptr));

}