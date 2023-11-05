#include<stdio.h>
void main(){
    int i,j,n;
    puts("give no of rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1&&j==1||i==n&&j==n||i==1&&j==n||i==n&&j==1){
                printf("0");
            }
            else if(i==1||i==n||j==1||j==n){
                printf("1");
            }
            else{
                printf("0");
            }
        }puts(" ");
    }
}