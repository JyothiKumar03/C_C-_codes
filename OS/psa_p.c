#include <stdio.h>
struct process
{
    int WT, AT, BT, TAT, PT, FT;
};
struct process a[10];

int main()
{
    int n, temp[10], t, count = 0, k;
    float total_WT = 0, total_TAT = 0, Avg_WT, Avg_TAT;
    printf("Enter the number of the process :");
    scanf("%d", &n);
    printf("Enter the arrival time , burst time and priority of the process\n");
    printf("AT BT PT\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &a[i].AT, &a[i].BT, &a[i].PT);
        temp[i] = a[i].BT;
    }
    a[9].PT = 10000;
    for (t = 0; count != n; t++)
    {
        k = 9;
        for (int i = 0; i < n; i++)
        {
            if (a[k].PT > a[i].PT && a[i].AT <= t && a[i].BT > 0)
            {
                k = i;
            }
        }
        a[k].BT = a[k].BT - 1;
        if (a[k].BT == 0)
        {
            count++;
            a[k].WT = t + 1 - a[k].AT - temp[k];
            a[k].TAT = t + 1 - a[k].AT;
            total_WT += a[k].WT;
            total_TAT += a[k].TAT;
            a[k].FT = a[k].TAT + a[k].AT;
        }
    }

    Avg_WT = total_WT / n;
    Avg_TAT = total_TAT / n;
    printf("ID AT BT PRIORITY FT TAT WT\n");
    for (int i = 0; i < n; i++)
    {
        printf("P%d %2d %2d %8d %2d %3d %2d\n", i + 1, a[i].AT, a[i].BT, a[i].PT, a[i].FT, a[i].TAT, a[i].WT);
    }
    printf("Avg turn around time of the process is %f\n", Avg_TAT);
    printf("Avg waiting time of the process  is %f\n", Avg_WT);
    return 0;
}