#include <iostream>
#include <stdlib.h>
using namespace std;

struct stack{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr){
    if (ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct stack*ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }

}

int main(){
    // struct stack sp;
    // sp.size=80;
    // sp.top=-1;
    // sp.arr=(int*)malloc(sp.size * sizeof(int));

    struct stack *sp;
    sp->size=10;
    sp->top=-1;
    sp->arr=(int*)malloc(sp->size*sizeof(int));
    cout<<"stack created successfully"<<endl;


    cout<<isFull(sp);
    cout<<isEmpty(sp);
    return 0;
   
}
