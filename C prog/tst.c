#include<stdio.h>
struct tag{
        int i;
        char c;
        char d;
    };
int main(){
    printf("%lu",sizeof(struct tag));
    //int i,k;
    //k=5;
    //i=++k;
    //printf("%d %d",i,k);
    return 0;
}