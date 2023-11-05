#include<stdio.h>
void main(){
    int i,j,n;
    puts("give no of rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==3||j==3){
                printf("0");
            }
            else{
                printf("1");
            }
        }puts(" ");
    }
}