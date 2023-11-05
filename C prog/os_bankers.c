#include <stdio.h>
int main()
{
    int n, m, index = 0;
    printf("Enter no of processes : \n");
    scanf("%d", &n); // no of processes'
    printf("Enter no of resources \n: ");
    scanf("%d", &m);
    int alloc[n][m], max[n][m], need[n][m];
    printf("Enter Allocation matrix\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &alloc[i][j]);
        }
    }
    printf("Enter max matrix\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &max[i][j]);
        }
    }
    int avail[3] = {3, 3, 2};
    int f[n], ans[n];
    for (int k = 0; k < n; k++)
    {
        f[k] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            need[i][j] = max[i][j] - alloc[i][j];
        }
    }
    int y = 0;
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            if (f[i] == 0)
            {
                int flag = 0;
                for (int j = 0; j < m; j++)
                {
                    if (need[i][j] > avail[j])
                    {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0)
                {
                    ans[index++] = i;
                    for (y = 0; y < m; y++)
                    {
                        avail[y] += alloc[i][y];
                    }
                    f[i] = 1;
                }
            }
        }
    }
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        if (f[i] == 0)
        {
            flag = 0;
            printf("\nFollowing system is not SAFE\n");
            break;
        }
    }
    if (flag == 1)
    {
        printf("\nFollowing is the SAFE sequence\n");
        for (int i = 0; i < n; i++)
        {
            printf("P%d -> ", ans[i]);
        }
        // printf("P%d -> ", ans[n - 1]);
    }
    return 0;
}