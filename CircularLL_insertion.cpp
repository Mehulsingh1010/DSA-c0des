#include <iostream>
#include <stdlib.h>
using namespace std;


struct node{
    int data;
    struct node* next;
};


void LLTraversal(struct node* head){
    struct node* ptr=head;
    do
    {
        cout<<"Element :"<<ptr->data<<endl;
        ptr=ptr->next;
    
    } while (ptr!=head);
    
}

struct node* InsertioninFirst(struct node*head, int data ){
    struct node * ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;

    struct node* p=head->next;
    while(p->next!=head){
        p=p->next;
    }

    p->next=ptr;
    ptr->next= head;
    // head=ptr;
    return ptr;
}

struct node* InsertioninLast(struct node* head,int data){
    struct node * ptr=(struct node*)malloc(sizeof(struct node));
    struct node* p=head->next;
    while(p->next!=head){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    ptr->data=data;
    return head;
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
    fourth->next=head;

    cout<<"Initial CLL"<<endl;
    LLTraversal(head);
    // head=InsertioninFirst(head, 20);
    // head=InsertioninFirst(head,42);
    // head=InsertioninLast(head,50);
    // head=InsertioninLast(head,60);
    // head=InsertioninIndex(head,12,2);
    head=InsertionaftergivenNode(head,second,23);
    cout<<"New CLL"<<endl;
    LLTraversal(head);
    return 0;
}
