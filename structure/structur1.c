#include<stdio.h>

int main(){

    struct exp{
        int weight;
        float height;
        char gender;
        char name[45];
    };

    struct exp detail;
    detail.weight=89;
    detail.height=8.9;
    detail.gender='m';
    strcpy(detail.name,"kaliya");

    printf("the weight of the person is %d\n",detail.weight);
    printf("the height of the person is %f\n",detail.height);
    printf("the gender of the person is %c\n",detail.gender);
    printf("the name of the person is %s\n",detail.name);
    
    return 0;
}