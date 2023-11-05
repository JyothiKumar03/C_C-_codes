#include<stdio.h>
#include<math.h>
int fact(int x){
    int i,f=1;
    for(i=1;i<=x;i++){
        f*=i;
    }
    return f;
}
int ncr(int n,int r){
    return fact(n)/(fact(n-r)*fact(r));
}
void main(){
    int n,r;
    printf("give the numbers");
    scanf("%d %d",&n,&r);
    printf("%d ncr is",ncr(n,r));
}