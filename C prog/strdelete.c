#include<stdio.h>
#include<string.h>
#include<conio.h>
void delete(char str[],int pos,int n){
    int i,len;
    len=strlen(str);
    for(i=pos+n;i<len;i++){
        str[i-n]=str[i];         //deleting the characters by shifting previous ones to forward
    }
    str[i-n]=str[i];              //initializig the last one 
    printf("the string after deletion is \n%s",str);
}

void main(){
    char str[100];
    int i,j,n,pos;
    puts("enter the string:");
    gets(str);
    printf("enter the position:");
    scanf("%d",&pos);
    printf("enter no of characters to be deleted:");
    scanf("%d",&n);
    delete(str,pos,n);

}