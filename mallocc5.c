#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enter any number");
    scanf("%d",&n);

    int*ptr=(int *)malloc(n*4);
    int *p=ptr;
    for(int i=0;i<n;i++){
        scanf("%d",ptr); //ptr==&(*ptr)
        ptr++;
    }
     
    for(int i=0;i<n;i++){
        printf("%d ",*p);
        p++;
    }
    free(ptr-n);
    ptr=NULL;
}