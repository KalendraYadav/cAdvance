#include <stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);

    int *ptr=(int *)malloc(n*sizeof(int));
    int * p=ptr;
    for(int i=0;i<n;i++){
        scanf("%d",&(*ptr));
        ptr++;
    }
        printf("the elements are");
    for(int i=0;i<n;i++){
        printf("%d ",(*p));
        p++;
    }
}