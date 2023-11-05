#include<stdio.h>
void rom(int n){
    while(n){
        if(n>=50){
            printf("L");
            n=n-50;
        }
        else if(n>=10){
            printf("X");
            n=n-10;
        }
        else if(n>=5){
            printf("V");
            n=n-5;
        }
        else if(n>=1){
            printf("I");
            n=n-1;
        }
    }
}
void main(){
    int n;
    printf("enter decimal value -->");
    scanf("%d",&n);
    printf("the roman number is --> ");
    rom(n);
}