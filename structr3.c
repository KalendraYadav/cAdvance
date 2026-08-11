#include<stdio.h>
struct student{
    int id;
    int marks;
    char favsubject;
};
int main(){
  struct student risu, ravi, rahul;
  risu.id=90;
  ravi.id=89;
  rahul.id=67;
  risu.marks=90;
  ravi.marks=765;
  rahul.marks=90;
  risu.favsubject='m';
    ravi.favsubject='s';    
rahul.favsubject='r';


printf("the id of the risu is %d\n",risu.id);
printf("the marks of the risu is %d\n",risu.marks);
printf("the fav sub of the  risu is %c\n",risu.favsubject);

}