#include<stdio.h>
#include<limits.h>
int main(){
    int y=INT_MAX;
    printf("%d\n",y);


    long int p=LONG_MAX;
    printf("%ld\n",p);

    long int q=9223372036854775807;
    printf("%ld\n",q);
    // long int r=9223372036854775808;
    // printf("%ld\n",r);


    printf("the long long int max value is below\n");

    long long int s=LLONG_MAX;
    printf("%lld\n",s);

}