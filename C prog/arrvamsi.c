#include<stdio.h>
void main(){
    int arr[10],c[10];
    int n,i,j,coumt=0,;
    peintf("give the array:");
    for(i=0;i<10;i++){
        scanf("%i",&arr[i]);
    }c[i]=-1;
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(arr[i]==c[j]){
                count++;
                c[j]=0;
            }
        }
    }
    if(c[i] != 0)
        {
            c[i] = count;
        }
    }
    printf("\nFrequency of all elements of array : \n");
    for(i=0; i<10; i++)
    {
        if(c[i] != 0)
        {
            printf("%d occurs %d times\n", arr[i], c[i]);
        }
    }
    return 0;
}


