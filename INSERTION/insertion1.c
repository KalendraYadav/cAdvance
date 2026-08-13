//insert at begin -o(1)
//insert at end- o(n)
//insert in betwnne- o(n)
//insert after given -o(1)

#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};

void call(struct node *ptr){
    while(ptr!=NULL){
    printf("elemnts are: %d\n",ptr->data);
    ptr=ptr->next;
    }
}

//insert function ,this is function of data type struct not structure
struct node *insertbegin(struct node *head, int data){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}


int main(){

    struct node *head;
    struct node *second;
    struct node *third;
    struct node *forth;

    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node*)malloc (sizeof(struct node));
    third =(struct node*)malloc(sizeof(struct node));
    forth=(struct node *)malloc (sizeof(struct node));

//linking the list
head ->data =98;
head ->next =second;

second ->data =87;
second->next=third;

third ->data =12;
third ->next =forth;

forth ->data =67;
forth->next=NULL;


//calling the print function

call(head);

printf("after the insertion\n");
head=insertbegin(head, 78);
call(head);



    return 0;

}