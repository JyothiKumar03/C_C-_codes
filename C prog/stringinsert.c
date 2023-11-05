#include<stdio.h>
#include<string.h>
int main()
{
    char ms[100],ss[100],r[100];
    int ml,sl,i,j,pos;
    printf("enter main string: ");
    gets(ms);
    printf("\n enter sub string :");
    gets(ss);
    printf("\n enter position");
    scanf("%d",&pos);
    ml=strlen(ms);
    sl=strlen(ss);
    if(pos<0)
    {
        printf("not possible");   
    }

    else if(pos<ml)
    {
        for(i=0;i<pos;i++)
            r[i]=ms[i];
        for(j=0;j<sl;j++)
            r[i++]=ss[j];
        for(j=pos;j<ml;j++)
            r[i++]=ms[j];
            r[i]='\0';
            puts(r);
    }
    else{
        for(i=0;i<ml;i++)
        {
            r[i]=ms[i];
        }
        for(j=0;i<pos;j++)
        {
            r[i++]=' ';
        }
        for(j=0;j<sl;j++)
        {
            r[pos++]=ss[j];
            
        }
        r[pos]='\0';
        //puts(r);
        
    }
}