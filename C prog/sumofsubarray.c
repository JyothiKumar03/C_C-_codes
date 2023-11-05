/*sum of all subarrays in the given array in c
ex: [1,2,2] given all subarrays are [1],[1,2],[1,2,2],[2],[2,2],[2]
approach: iterate through all subarrays for(i=0;i<n-1;i++);for(j=i;j<n-1;j++);sum[i j];*/


#include<stdio.h>
void main(){
    int n,i,j,sum=0;
    int arr[n];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            sum=sum+arr[j];
            printf("sub arrays are %d\n",arr[j]);
        }
    }
    //printf("sum is %d",sum);
}