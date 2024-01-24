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

struct node* InsertioninFirst(struct node*head, int data ){
    struct node * ptr=(struct node *)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=data;
    return ptr;

}

struct node* InsertioninIndex(struct node*head, int data, int index){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    struct node* p =head;
    int i=0;
    while(i!=index-1){
        p=p->next;i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
};


struct node * InsertionaftergivenNode(struct node *head,struct node*prevnode, int data){
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    ptr->data = data;
    
    ptr->next = prevnode->next;
    prevnode->next=ptr;
    return head;
}


struct node * InsertioninEnd(struct node *head, int data){
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    ptr->data = data;
    struct node * p = head;

    while(p->next!=NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
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

  
    // head = InsertioninFirst(head, 10);
    // head= InsertioninIndex(head, 20,2);
    // head=InsertioninEnd(head,100);
    head=InsertionaftergivenNode(head, second,102);
    LLTraversal(head);  
    return 0;
}