#include<stdio.h>
#include<string.h>
void main(){
    char str[100],str1[100];
    int i,j,l1,l2,l3,n;
    printf("Enter the string:\n");
    gets(str);
    printf("Enter sub string:\n");
    gets(str1);
    l1=strlen(str);
    l2=strlen(str1);
    printf("Enter the position:");
    scanf("%d",&n);
    for(i=n;i<l1;i++){
        str[l2+i]=str[i];       //creating space for the substring in main string
    }
    for(i=0;i<l2;i++){
        str[n+i]=str1[i];       //inserting substring into the main string
    }
    l3=strlen(str);              //modifing the latest length of the string
    str[l3+1]='\0';
   //cse str1[l2+l1]='\0';           //ending the string
    //str[l1+1]='\0';
    printf("the total string is %s",str);

}