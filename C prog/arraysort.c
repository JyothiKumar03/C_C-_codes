#include<stdio.h>
void main(){
    int n,i,j;
    int arr[10];
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    } //decending order code
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){ //for ascending order change if arr[j]<arr[i]//
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for( i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
}
/*while(l<r){
        if(arr[l]+arr[r]==0){
            count++;
            return count;
        }
        else if(arr[l]+arr[r]<0){
            l++;
        }
        else if(arr[l]+arr[r]>0){
            r--;
        }
    }*/