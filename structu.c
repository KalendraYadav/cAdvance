#include<stdio.h>
struct student{
    char name[23];
    int age;
    float marks;
};
int main(){
    struct student s1;
    s1.age=23;
   strcpy(s1.name,"kalendra yadav");
    s1.marks=95.6;
    // s1.name="kalendr yadav"; //this is not valid because we cannot assign the value to the array directly, we have to use strcpy function to assign the value to the array.
    printf("the name of the student is %s\n",s1.name);
    printf("the age of the student is %d\n",s1.age);
    printf("the marks of the student is %f\n",s1.marks);

}