#include<stdio.h>
#include<math.h>
void main(){
    double a,b;
    int i,x,y,sum=0;
    scanf("%d %d",&a,&b);
    x=pow(a,b);
    while (x > 0) {
        y =(x%10);
        sum=sum+y;
        x /= 10;
    }
        printf("%d",sum);
}