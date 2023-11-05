#include<stdio.h>
int prime(int x){
    int count= 0,i=1;
    while(i<=x){
        if(x%i==0)
            count++;
    }i++;
    if(count==2){
        return 1;
    }
    else{
        return 0;
    }
}
void main(){
    int x,z=prime(23);
}
    