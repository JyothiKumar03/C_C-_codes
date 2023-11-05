#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
   char fname[20];
   char lname[20];
   char gender;
   int age;
   }st1,st2,st3;
   struct st4{"rama","sam",24,'m'};
int main(){
    printf(st4.fname);

}