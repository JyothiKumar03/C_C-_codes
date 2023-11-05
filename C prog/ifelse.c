#include<stdio.h>
void main(){
int age;
printf("enter ur age:\n");      
scanf("%d",&age);
if (age>=18)
{
    printf("%d\nu can vote",age);
}
else
{
printf("u cannot vote") ;
}
}