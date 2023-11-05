#include<stdio.h>
void main(){
    int i,j,n,space;
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("*");
            }
        space = ((2*n)-(2*i));    
        for(j=1;j<=space;j++){
            printf(" ");
            }
        for(j=1;j<=i;j++){
            printf("*");
        }printf("\n");
    }
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("*");
            }
        space = ((2*n)-(2*i));    
        for(j=1;j<=space;j++){
            printf(" ");
            }
        for(j=1;j<=i;j++){
            printf("*");
        }printf("\n");
    }
}
