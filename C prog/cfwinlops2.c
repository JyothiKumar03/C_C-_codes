#include<stdio.h>
/*int main(void){
    int n,i,sum=0;
    printf("give the number:");
    scanf("%i",&n);
    for ( i = 0; i <=n; i++)
    {
        sum=sum+i;
    }
    printf("the sum is %i",sum);
    return 0;

}*/
#include<stdio.h>
int main(void){
    int n,i,sum=0;
    printf("give the number");
    scanf("%i",&n);
    for(i=1;i<=n;i+=2){
        sum=sum+i;
    }printf("the sum of odd numbers are%i",sum);
    return 0;
}