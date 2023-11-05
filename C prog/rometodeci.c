#include<stdio.h>
#include<string.h>
int v(char rom){
    int val;
    switch(rom){
        case 'I':val=1;
        break;
        case 'V': val=5;
        break;
        case 'X':val=10;       
        break;
        case 'L':val=50;        
        break;
        /*case 'C': val=100;
        break;      
        case 'D': val=500;
        break;
        case 'M': val=1000;
        break;*/
        case '\0':val=0;
        break;
        default:val=-1;
        break;
    }
    return val;
}
void main(){
    char str[100];
    char rom;
    int i=0,num=0;
    printf("Enter the roman number\n");
    gets(str);
    //n=strlen(str)-1;
    while(str[i]){
        if(v(str[i])<0 || v(str[i])>50){
            printf("Invalid");
        }
        if(v(str[i])>=v(str[i+1])){
            num=num+v(str[i]);
        }
        else{
            num=num+(v(str[i+1])-v(str[i]));
            i++;
        }
        i++;
    }
    printf("the decimal number is --> %d",num);
}