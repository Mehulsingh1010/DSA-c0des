#include <iostream>
#include <stdlib.h>
using namespace std;


struct node{
    int data;
    struct node* next;
};


void LLTraversal(struct node*ptr){
    while(ptr!=NULL){
    cout<<"Element : "<<ptr->data<<endl;    
    ptr=ptr->next;}
    
}


int main(){
    struct node*head=(struct node*)malloc(sizeof(struct node));
    struct node*second;
    struct node*third;
    struct node*fourth;
    //allocating memoery from the heap
    // head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));


    head->data=1;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=fourth;

    fourth->data=4;
    fourth->next=NULL;

  

    LLTraversal(head);  
    return 0;
}