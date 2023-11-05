#include<stdio.h>
#include<conio.h>
struct info
{
    char name[100];
    int price;
    float change;
};
//struct info s1;
void main(){
    struct info s;
   // char s[100];
    printf("Give the name of the stock\n");
    scanf("%s",s.name);
    printf("Details are -->\n");
    scanf("%d",&s.price);
    scanf("%f",&s.change);
    printf("%f",(s.price) + (s.change));
}