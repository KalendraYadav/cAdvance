#include<stdio.h>
#include<stdlib.h>

struct hello{
    int data;
    struct hello*next;

};


void calling(struct hello *ptr){
    while(ptr!=NULL){
        printf("elements are: %d\n",ptr->data);
        ptr=ptr->next;
    }

}

int main(){
    //dynamic memory allocation

    struct hello* head=(struct hello*)malloc(sizeof(struct hello));
    struct hello*second=(struct hello*)malloc(sizeof(struct hello));
    struct hello* third=(struct hello*)malloc(sizeof(struct hello));
    struct hello* fort=(struct hello*)malloc(sizeof(struct hello));

    head ->data=76;
    head->next=second;

    second-> data=90;
    second->next=third;
    
    third ->data=34;
    third->next=fort;

    fort ->data=76;
    fort->next=NULL;


calling(head);

}
