#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};


//function for the traversal

void printiglist(struct node* ptr){
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
int main(){

    struct node *head=(struct node*) malloc (sizeof(struct node));
    struct node*second=(struct node*)malloc (sizeof(struct node));
    struct node*third=(struct node*)malloc (sizeof(struct node));
    

    //linking the nodes fist and second nodes
    head->data=9;
    head->next=second;

      //second and third node
      second->data=89;
      second->next=third;
      //terminate the node

      third ->data=23;
      third->next=NULL;

      printiglist(head); //printing by calling the function
      


    return 0;
}