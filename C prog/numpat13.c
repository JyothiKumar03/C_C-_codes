#include<stdio.h>
void main(){
    int i,j,n,k=1;
    puts("enter no of rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++,k++){
            printf("%3d",k);
        }puts(" ");
    }
}