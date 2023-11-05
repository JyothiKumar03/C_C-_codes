/*to show that the max element present in i till the given i value in an array
       ex arr=[1,0,5,4,6,8]
max till i is [1,1,5,5,6,8]
approach: take a variable mx which stores macx value till i & iterates over array and update
mx=max(mx,arr[i])

*/
#include<stdio.h>
void main(){
    int n,i,mx=0;
    int arr[n];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]>arr[mx]){
            mx=i;
            printf("the max element till i is %d\n",arr[mx]);
        }
    }
}