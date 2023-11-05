#include<stdio.h>

void main(){
    int t;
    printf("ENTER NO OF STUDENTS\n");
    scanf("%d",&t);
    while(t--){
        int sno,roll;
        char name[100],dept[100],sec;
        
        scanf("%d %d",&sno,&roll);
        for(int i=0;i<100;i++){
            scanf("%s",name[i]);
        }
        for(int i=0;i<100;i++){
            scanf("%s",dept[i]);
        }
        scanf("%c",&sec);
        printf("SNO\tROLL\tNAME\tDEPARTMENT\tSECTION\n");
        printf("%d\t%d\t",sno,roll);
        for(int i=0;i<100;i++){
            printf("%d",name[i]);
        }printf("\t");
        for(int i=0;i<100;i++){
            printf("%d",dept[i]);
        }printf("\n");
    }
}

int tri(int a,int b){
    return (a*b)/2;
}
int sq(int s){
    return s*s;
}
int rec(int l,int b){
    return l*b;
}
void main(){
    int a,b,s,l,m;
    printf("ENTER THE SIDE OF THE TRIANGLE\n");
    scanf("%d %d",&a,&b);
    printf("ENTER THE SIDE OF THE RECTANGLE\n");
    scanf("%d %d",&l,&m);
    printf("ENTER THE SIDE OF THE SQUARE\n");
    scanf("%d %d",&a,&b);
    printf("AREA OF TRIANGLE IS %d",tri(a,b));
    printf("AREA OF RECTANGLE IS %d",rec(l,m));
    printf("AREA OF SQUARE IS %d",sq(s));

}