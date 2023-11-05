#include<stdio.h>
void main(){
    int n,temp,first,last;
    printf("enter the number\n");
    scanf("%d",&n);
    last=n%10;
    first=n;
    while(first>10){
        first=first/10;
    }
    printf("%d is first number\n",first);
    printf("%d is last number\n",last);

}