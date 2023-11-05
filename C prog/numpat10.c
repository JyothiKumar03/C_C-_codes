#include<stdio.h>
void main(){
    int i,j,n;
    puts("enter no of rows");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%d",i);
        }puts(" ");
    }
}