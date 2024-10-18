#include <stdio.h>

#define SIZE 5

void Input(int buf[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &buf[i]);
    }
}

int f_max(int buf[], int n)
{
    int max_1 = buf[0], max_2 = buf[0], sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (max_1 < buf[i])
        {
            max_1 = buf[i];
        }
        else if ( max_2 < buf[i] && max_2 == max_1)
        {
            max_2 = buf[i];
            printf("%d %d\n", max_1, max_2);
        }
        sum = max_1 + max_2;
    }
    return sum;
}
/*int s_max(int buf[], int n)
{
    int max_2 = buf[0];
    for (int i = 0; i < n; i++)
    {
        if (max_2 < buf[i] && max_2 < max_1)
    }
}
*/
int main(void)
{
    int buf[SIZE];
    Input(buf, SIZE);
    printf("%d\n", f_max(buf, SIZE));
    return 0;
}