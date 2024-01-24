#include<iostream>
using namespace std;

//traversal
void display(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}
//insertion:index
int INDInsertion(int arr[],int size,int element, int capacity, int index){
    if(size>=capacity){
        return -1;
    }
    for (int i = size-1; i >=index; i--)
    {
        arr[i+1]=arr[i];
        
    }
    arr[index]=element;
    return 1;
    
}
void DeleteAtIndex(int arr[], int size, int index){
    for (int i = index; i < size-1; i++)
    {
        arr[i]=arr[i+1];
    }
    
}

int main(){
    int arr[100]={1,5,4,7,2};
    int size=5 , element=45, index=3;
    // display(arr, size);
    DeleteAtIndex(arr, size, index);
    size-=1;
    // INDInsertion(arr, size, element,100, index);
    // size+=1;

    display(arr, size);
}