#include<stdio.h>
int main(void){
    int i,j,r,c;
    puts("enter the no 0f rows");
    scanf("%i",&r);
    puts("enter the no 0f coloumns");
    scanf("%i",&c);
    for(i=0;i<=r;i++){
        for(j=1;j<=i+c;j++){
            printf("%3i",i);
        }printf("\n");
    }return 0;
}
