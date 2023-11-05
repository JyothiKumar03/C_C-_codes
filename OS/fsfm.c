/*#include <stdio.h>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n, int arr1[])
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                swap(&arr1[j], &arr[j + 1]);
            }
        }
    }
}
int main()
{
    int n;
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    int i;
    int id;
    int at, bt, ft, tat, wt;
    int arrival[n];
    int burst[n];
    int finish[n];
    int turnaround[n];
    int wait[n];
    int c = 0;
    int max = 0;

    for (i = 0; i < n; i++)
    {
        printf("Enter AT,BT,FT");
        scanf("%d %d", &arrival[i], &burst[i]);
        bubbleSort(arrival[], n, burst[]);
        c = c + burst[i];
        finish[i] = c;
        turnaround[i] = finish[i] - arrival[i];
        wait[i] = turnaround[i] - burst[i];
    }
    for (i = 0; i < n; i++)
    {
        printf("%-3d | %-3d | %-3d | %-3d | %-3d | %-3d", i, arrival[i], burst[i], finish[i], turnaround[i], wait[i]);
        printf("\n");
    }

    return 0;
}*/

// #include <stdio.h>
// int main()
// {
//     int n, t, num, b;
//     printf("Enter number of processes:");
//     scanf("%d", &n);
//     int arrid[n];
//     int arrat[n];
//     int arrb[n];
//     int ft[n], tat[n], wt[n];
//     printf("Enter ids,arrival times and burst times\n");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d %d %d", &arrid[i], &arrat[i], &arrb[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (arrat[i] < arrat[j])
//             {
//                 t = arrat[i];
//                 arrat[i] = arrat[j];
//                 arrat[j] = t;
//                 num = arrid[i];
//                 arrid[i] = arrid[j];
//                 arrid[j] = num;
//                 b = arrb[i];
//                 arrb[i] = arrb[j];
//                 arrb[j] = b;
//             }
//             if (arrat[i] == arrat[j])
//             {
//                 num = arrid[i];
//                 arrid[i] = arrid[j];
//                 arrid[j] = num;
//                 b = arrb[i];
//                 arrb[i] = arrb[j];
//                 arrb[j] = b;
//                         }
//         }
//     }
//     ft[0] = arrat[0] + arrb[0];
//     for (int i = 1; i < n; i++)
//     {
//         ft[i] = ft[i - 1] + arrb[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         tat[i] = ft[i] - arrat[i];
//         wt[i] = tat[i] - arrb[i];
//     }
//     int avgwt = 0;
//     int avgtat = 0;
//     printf("id\t AT\t BT\t FT\t TAT\t WT\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d\t %d\t %d\t %d\t %d\t %d\n", arrid[i], arrat[i], arrb[i], ft[i], tat[i], wt[i]);
//         avgtat = avgtat + tat[i];
//         avgwt = avgwt + wt[i];
//     }
//     printf("avg TAT");
//     printf("%d", avgtat / n);
//     printf("avg WT");
//     printf("%d", avgwt / n);
// }
#include <stdio.h>
#include <stdlib.h>
struct PCB
{
    int pid, arrival, burst, tat, wt;
};
void line(int x);
int main()
{
    int i, j, num;
    float avg = 0.0, sum = 0.0;
    struct PCB p[10], temp;
    printf("Enter total no of processes :");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        printf("Enter the arriavl time and burst time for %d process:\n", i + 1);
        scanf("%d %d", &p[i].arrival, &p[i].burst);
        p[i].pid = i + 1;
    }
    // sorting process according to the arrival time
    for (i = 0; i < num - 1; i++)
    {
        for (j = 0; j < num; j++)
        {
            if (p[j].arrival > p[j + 1].arrival)
            {
                temp = p[j];
                p[j] = p[j + 1];

                p[j + 1] = temp;
            }
        }
    }
    // to calculate tat
    int time = 0;
    p[0].wt = 0;
    for (i = 1; i < num; i++)
    {
        p[i].wt = 0;
        for (j = 0; j < i; j++)
        {
            p[i].wt += p[j].burst;
        }
        time += p[i].wt;
    }
    sum = 0;
    // time = 0;
    line(45); // used to draw a table in display
    printf("PID\tARRIVAL\tBURST\tTURNAROUND\tWT\n");
    line(45);
    for (i = 0; i < num; i++)
    {
        p[i].tat = p[i].burst + p[i].wt;
        sum += p[i].tat;
        printf("%d\t%d\t%d\t%d\t%d\n", p[i].pid, p[i].arrival, p[i].burst, p[i].tat, p[i].wt);
        sum += p[i].tat; // sum of tat of all processes
                         // time += p[i].wt;
    }
    line(45);
    avg = (float)sum / num;
    printf("Total TAT : %f\n", sum);
    printf("Average TAT : %f\n", avg);
    line(45);
    avg = (float)time / num;
    printf("Total WT : %f\n", time);
    printf("Average WT : %f\n", avg);
    line(45);
}
void line(int x)
{
    for (int i = 0; i < x; i++)
    {
        printf("-");
    }
    printf("\n");
}