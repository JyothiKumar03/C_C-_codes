#include<stdio.h>
void bsort(int x[],int siz){
    int count=1;
    while(count<siz){
        for(int i=0;i<siz;i++){
            if(x[i]>x[i+1]){
                int temp=x[i];
                x[i]=x[i+1];
                x[i+1]=temp;
            }
        }
        count++;
    }
    for(int i=0;i<siz;i++)
    printf("%d ",x[i]);
}
void main(){
    int n,i;
    printf("How many elements to sort:");
    scanf("%d",&n);
    int arr[n];
    printf("Give the elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("After sorting the elements are:\n");
    bsort(arr,n);
}