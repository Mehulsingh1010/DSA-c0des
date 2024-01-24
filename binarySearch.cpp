#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int element){
    int low,mid,high;
    low=0;
    high=size-1;
while(low<=high){
    
    mid=(high+low)/2;
    if(arr[mid]==element){
        return mid;}
    if(arr[mid]>element){
        high=mid-1;}
    if(arr[mid]<element){
        low=mid+1;}
} return -1;}

int main(){
    int element=13;
    int arr[]={1,2,3,12,13,16,19,20,50};
    int size=sizeof(arr)/sizeof(int);
    int Searchindex= BinarySearch(arr, size, element);
    cout<<"The element is at index : "<<Searchindex<<endl;
}

//linear search O(n)
//binary search O(log n)

