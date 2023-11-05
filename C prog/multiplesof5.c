#include<stdio.h>

int main(void){
    int n1,n2,a,i,sum=0;
    printf("give the number:\n");
    scanf("%i%i",&n1,&n2);
    for ( i = n1; i <= n2; i++)
    {
        if(i%5!=0){
          printf("%i\n",i);
        }
    }   
    return 0;
}