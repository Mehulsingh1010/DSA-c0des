#include <iostream>
using namespace std;

int linearsearch(int arr[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element){
            return i;
        }
    }return -1;
    }

int main(){
    int arr[]={1,2,3,4,5,6,8,44};
    int size=sizeof(arr)/sizeof(int);
    int element;
    cout<<"Enter element to search for: "<<endl;
    cin>>element;
    int searchIndex=linearsearch(arr,size,element); 
    cout<<"The element was found at element " <<element<<" and index "<<searchIndex<<endl;
};
