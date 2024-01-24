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

struct node* deletefromfront(struct node* head){
    struct node* ptr=head;
    head=head->next;
    free(ptr);
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

  
    cout<<"Initial_LL"<<endl;
    LLTraversal(head);  
    cout<<"New_LL"<<endl;
    head=deletefromfront(head);
    LLTraversal(head);
    return 0;
}

