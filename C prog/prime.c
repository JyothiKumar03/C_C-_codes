#include<stdio.h>
#include<math.h>
void  main(){
    int i,n,iprime=1;
    printf("give the number");
    scanf("%d",&n);
    i=2;
    while(i<=sqrt(n)){
        if(n%i==0){
            iprime=0;
            break;
        }i++;
    }
        if(iprime==1){
            printf("%d is prime",n);
        }
        else{
            printf("%d is not prime",n);
        }
    
}