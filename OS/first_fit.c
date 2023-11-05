#include <stdio.h>
int main()
{
    int bsize[10], psize[10], bno, pno, flags[10], allocation[10];
    for (int i = 0; i < 10; i++)
    {
        flags[i] = 0;
        allocation[i] = -1;
    }
    printf("Enter no of blocks\n");
    scanf("%d", &bno);
    printf("ENter size of each block\n");
    for (int i = 0; i < bno; i++)
    {
        scanf("%d", &bsize[i]);
    }
    printf("Enter no of processes\n");
    scanf("%d", &pno);
    printf("ENter size of each process\n");
    for (int i = 0; i < pno; i++)
    {
        scanf("%d", &psize[i]);
    }
    for (int i = 0; i < bno; i++)
    {
        for (int j = 0; j < pno; j++)
        {
            if (flags[j] == 0 && bsize[j] > psize[i])
            {
                allocation[j] = i;
                flags[j] = 1;
                break;
            }
        }
    }
    printf("\nblock no\tsize\t\tprocess no\t\tsize");
    for (int i = 0; i < bno; i++)
    {
        printf("$d\t\t\t%d\t\t", i + 1, bsize[i]);
        if (flags[i] == 1)
        {
            printf("%d\t\t\t%d", allocation[i] + 1);
        }
        else
        {
            printf("not allocated");
        }
    }
}