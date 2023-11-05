#include<stdio.h>
void main(){
    int i,j,n,x;
    printf("give no of rows\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j%2==0){
            printf("1");}
            else{
                printf("0");
            }
        }puts(" ");
    }
}