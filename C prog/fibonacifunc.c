#include<stdio.h>
void fibo(int n){
    int i,t1=0,t2=1;
    int next;
    for(i=1;i<=n;i++){
        printf("%2d",t1);
        next=t1+t2;
        t1=t2;
        t2=next;
    }
}
void main(){
    int n;
    scanf("%d",&n);
    fibo(n);
}