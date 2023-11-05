// producer consumer problem using semaphores
#include <stdio.h>
#include <stdlib.h>
int mutex = 1;
int full = 0;
int empty = 10;
int x = 0;
int wait(int a)
{
    return --a;
}
int signal(int a)
{
    return ++a;
}
void producer()
{
    mutex = wait(mutex);
    empty = wait(empty);
    // items produced;
    x++;
    printf("\n Producer produced the item %d\n", x);
    full = signal(full);
    mutex = signal(mutex);
}
void consumer()
{
    mutex = wait(mutex);
    full = wait(full);
    printf("\nconsumer consumed the process %d\n", x);
    x--;
    mutex = signal(mutex);
    empty = signal(empty);
}
int main()
{
    int n, i;
    printf("\n1. Press 1 for producer"
           "\n2. Press 2 for consumer"
           "\n3. Press 3 to exit");
    for (int i = 1; i > 0; i++)
    {
        printf("Enter your choice : ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            if (mutex == 1 && empty != 0)
            {
                producer();
            }
            else
            {
                printf("The input buffer is full\n");
            }
            break;
        case 2:
            if ((mutex == 1) && (full != 0))
            {
                consumer();
            }
            else
            {
                printf("The buffer is empty\n");
            }
            break;
        case 3:
            exit(0);
            break;
        }
    }
    return 0;
}