#include<stdio.h>
struct hall{
    int age;
    float money;
    char gender;
};
int main(){
    struct hall a;
    a.age=34;
    a.money=87654;
    a.gender='m';
    printf("the age , money and the gender of the person is");
    printf("%d\n", a.age);
    printf("%f\n", a.money);
    printf("%c\n", a.gender);
    return 0;
}