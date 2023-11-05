#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main(){
    int r=2,c=2;
    int i,j;
    int *p;
    p=(int*)calloc(r*c,sizeof(int));
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",p+(i*c)+j);
        }
    }
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            printf("%d ",*(p+(j*c+i)));
        }
        printf("\n");
    }
}