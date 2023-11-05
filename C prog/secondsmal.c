#include<stdio.h>
void main(){
int i,num[10],first,second,sum=0;
puts("Read 10 values for a numerical array");
for(i=0;i<10;i++)
   scanf("%d\t",&num[i]);
   if (num[0]<num[1])
   {
       first=num[1];
       second=num[0];
   }else
   {
       first=num[0];
       second=num[1];
   }
for(i=2;i<10;i++){
   if (first>num[i]){
       second=first;
       first=num[i];
   }else if(second>num[i]){
       second=num[i];
   }
   }
   printf("\nSecond smallest element is %d",second);
}
