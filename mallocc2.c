#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enteer the number ");
    scanf("%d",&n);

    int*ptr=(int*)calloc(n,sizeof(int));
    int *p=ptr;

    for(int i=0;i<n;i++){
        scanf("%d",&(*ptr));
        ptr++;
    }


    for(int i=0;i<n;i++){
        printf("%d ",(*p));
        p++;
    }
    free(ptr);

    return 0;
}