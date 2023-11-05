#include<stdio.h>
#include <math.h>
int prime(int x){
    int i;
    for(i=2;i<=sqrt(x);i++){
        if(x%2==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int a,b,i;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++){
        if(prime(i)==1){
            printf("%d\n",i);
        }
    }
}
