#include<stdio.h>
#include<math.h>
void main()
{
	float t,a=9.8;
	int i=10,s=3;
	printf("\nFloor|  Time taken");
    printf("\n-------------------");
	while(s<=30){
	    t=sqrt((2*s)/a);
	    s=s+3;
	    --i;
	printf("\n   %d|    %0.2f",i,t);
	}
}