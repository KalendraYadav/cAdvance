#include<stdio.h>
#define pi 3.14159265359 //this is called macros 

float area(float r){
    return pi*r*r;
}
int main(){
    printf("the area of the circle is %f\n",area(5.5));

}