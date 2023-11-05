//binary search for an element in an array
int search(int arr[],int n);
#include<stdio.h>
void main(){
    int n,arr[n];
    //array input
    search(arr[n]);
}
int search(int arr[],int n){
    int s,e,key;
    s=0;
    e=n-1;//e=n-1 in pps mam record
    while(s<=e){
        int mid = (s+e)/2;

        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}