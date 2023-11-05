
#include<stdio.h>
void main(){
    int n,i,pcount=0;
    puts("Enter a number(n) to find all the primes between 1 to n");
    scanf("%d",&n);
    for(i=3;i<=n;i++){
        if(n%i==0){
            pcount++;
        }
    }
    if(pcount==2){
	   printf("\t%d",n);		
	}
}

    
    
        
        
        
        
        
        
        
