#include<stdio.h>
void main(){
    int a,i;
    printf("give the number:");
    scanf("%i",&a);
    for ( i = 2; i <= a; i+=2)
    {
    printf("\nthe given number %i is even number",i);
    }
    
}