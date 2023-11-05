#include<stdio.h>
#include<math.h>
void main(){
    long int x,y,i,n,f,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        f=f*i;
    }
    printf("%ld\n",f);
    while(x>0){
        scanf("%d",&y);
        x=f%y;
        sum=sum+x;
        f/=10;
    }printf("%ld\n",sum);
}