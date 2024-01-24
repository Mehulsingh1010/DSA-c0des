#include <iostream>
#include <stdlib.h>
using namespace std;


struct myArray
{
   int total_size;
   int used_size;
   int *ptr;
};

void Createarray(struct myArray* a, int tSize, int uSize){
   (*a).total_size=tSize;
   (*a).used_size=uSize;
   int*ptr=(int*)malloc(tSize*sizeof(int));
}

void show(struct myArray *a ){
   for(int i=0; i < a->used_size; i++){
      int x= a->ptr[i];
      cout<<x;
   }
}

void Setval(struct myArray *a){
   int n;
   for(int i=0; i< a->used_size; i++){
      cout<<"Enter elements : ",i;
      cin>>n;
      (a->ptr)[i] = n;
   }
}
int main(){
   struct myArray marks;
   Createarray(&marks, 10, 2);
   cout<<"Running setval now, ";
   Setval(&marks);
   show(&marks);
   return 0;
}