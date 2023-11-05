#include<stdio.h>
#define pro(x) (x*x)
int main(){
    int i=3,j,k,l;
    j=pro(i+1);
    k=pro(i++);
    l=pro(++i);
    printf("%d %d %d %d",i,j,k,l);
}