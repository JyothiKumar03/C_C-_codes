#include<stdio.h>
void main(){
    int i,j,n;
    puts("enter no of rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=i;j<=n+i;j++){
            printf("%3d",j);
        }puts(" ");
    }
}