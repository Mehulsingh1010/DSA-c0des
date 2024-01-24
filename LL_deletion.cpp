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

struct node* DeletefromFront(struct node* head){
    struct node* ptr=head;
    head=head->next;
    free(ptr);
    return head;
};


struct node* DeletefromIndex(struct node* head, int index){
    struct node * p=head;
    struct node* q=head->next;
    for (int i = 0; i < index-1; i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
    
};

struct node* DeletefomLast(struct node* head){
    struct node* p=head;
    struct node* q=head->next;

    while (q->next!=NULL)
    {
        p=p->next;
        q=q->next;

    }
    p->next=NULL;
    free(q);
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

    cout<<"Previous LL: "<<endl;
    LLTraversal(head);
    cout<<"New LL"<<endl;
    // head=DeletefomLast(head);
    // head=DeletefromIndex(head,2); 
    // head=DeletefromFront(head);
    LLTraversal(head);  
    return 0;

}