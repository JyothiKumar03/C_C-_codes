/*1   1
   2 2
    3*/
#include<stdio.h>
void main(){
    int n,i,j;//count=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==j)
            printf(" %d",i);
            else
            {
                printf(" ");
            }
            
            //count++;
        }
        int space=((2*n)-(2*i));
        for(j=1;j<space;j++){
            if(i!=j)
            printf(" ");
        }
        for(j=1;j<n;j++){
            if(i==j)
            printf("%d",i);
            //count++;
        }
        printf("\n");
    }
}
