#include<stdio.h>
#define num(n)  (n%2==0)
void main(){
    int n;
    printf("give the number\n");
    scanf("%i",&n);
    #ifdef num(n)
    printf("%i is even\n",n);
    #elif num(n)
    printf("%i is odd\n",n);
    #endif
}