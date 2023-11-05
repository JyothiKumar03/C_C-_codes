#include<stdio.h>
void main(){
    int n1,n2,i,arr[5];
    printf("enter the array");
    for(i=0;i<5;i++){
        scanf("%d\t",&arr[i]);
    }
    for(i=5-1;i>=0;i--){
        printf("%d\t",arr[i]);
    }
}
