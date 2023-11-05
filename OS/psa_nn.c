// #include <stdio.h>

// struct proc
// {
//     int id, at, bt, priority;
//     int ft, tat, wt;
// };

// int main()
// {
//     printf("Enter no of process :");
//     int n, i;
//     scanf("%d", &n);
//     struct proc p[n];
//     printf("Give input in format ID AT BT Priority\n");
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d %d %d %d", &p[i].id, &p[i].at, &p[i].bt, &p[i].priority);
//     }
//     int x, y;
//     for (x = 0; x < n - 1; x++)
//     {
//         for (y = 0; y < n - x - 1; y++)
//         {
//             if (p[y].priority > p[y + 1].priority)
//             {
//                 struct proc temp = p[y];
//                 p[y] = p[y + 1];
//                 p[y + 1] = temp;
//             }
//         }
//     }
//     int total = 0;
//     int ttat = 0;
//     int twt = 0;
//     for (i = 0; i < n; i++)
//     {
//         total += p[i].bt;
//         p[i].ft = total;
//         p[i].tat = total;
//         p[i].wt = total - p[i].bt;
//         ttat += p[i].tat;
//         twt += p[i].wt;
//     }
//     for (x = 0; x < n - 1; x++)
//     {
//         for (y = 0; y < n - x - 1; y++)
//         {
//             if (p[y].id > p[y + 1].id)
//             {
//                 struct proc temp = p[y];
//                 p[y] = p[y + 1];
//                 p[y + 1] = temp;
//             }
//         }
//     }
//     printf("PID AT BT PRIORITY FT TAT WT\n");
//     for (i = 0; i < n; i++)
//     {
//         printf("%3d %2d %2d %8d %2d %3d %2d\n", p[i].id, p[i].at, p[i].bt, p[i].priority, p[i].ft, p[i].tat, p[i].wt);
//     }
//     printf("Average waiting time : %.3f ms\n", twt * 1.0 / n * 1.0);
//     printf("Average Turnaround time : %.3f ms\n", ttat * 1.0 / n * 1.0);
//     return 0;
// }
#include <stdio.h>
struct PCB
{
    int pid, at, bt, pro;
    int ft, tat, wt;
};
void line(int x);
void main()
{
    printf("Enter no of processes :");
    int n;
    scanf("%d", &n);
    struct PCB p[n];
    printf("Give input in format ID AT BT Priority\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d %d", &p[i].pid, &p[i].at, &p[i].bt, &p[i].pro);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (p[j].pro > p[j + 1].pro)
            {
                struct PCB temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
    int total = 0, ttat = 0, twt = 0;
    for (int i = 0; i < n; i++)
    {
        total += p[i].bt;
        p[i].ft = total;
        p[i].tat = total;
        p[i].wt = total - p[i].bt;
        ttat += p[i].tat;
        twt += p[i].wt;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (p[j].pid > p[j + 1].pid)
            {
                struct PCB t = p[j];
                p[j] = p[j + 1];
                p[j + 1] = t;
            }
        }
    }
    line(40);
    printf("pid\tat\tbt\tpro\tft\ttat\twt\n");
    line(40);
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\n", p[i].pid, p[i].at, p[i].bt, p[i].pro, p[i].ft, p[i].tat, p[i].wt);
    }
    printf("Average waiting time : %.3f ms\n", twt * 1.0 / n * 1.0);
    printf("Average Turnaround time : %.3f ms\n", ttat * 1.0 / n * 1.0);
}
void line(int x)
{
    for (int i = 0; i < x; i++)
    {
        printf("-");
    }
    printf("\n");
}