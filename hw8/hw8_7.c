#include <stdio.h>

#define SIZE 5

void Input(int buf[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &buf[i]);
    }
}
void Print(int buf[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", buf[i]);
    }
}
void reverse(int buf[], int i, int j)
{
     int temp = buf[i];
     buf[i] = buf [j];
     buf[j] = temp;
}
int Min(int buf[], int n)
{
    int min = buf[0];
    for (int i = 0; i < n; i++)
    {
        if (min > buf[i])
        {
            min = buf[i];
        }
    }
    return min;
}

int Max (int buf[], int n)
{
    int max = buf[0];
    for (int i = 0; i < n; i++)
    {
        if (max < buf[i])
        {
            max = buf[i];
        }
    }
    return max;
}
int Pos_Min(int buf[], int n)
{
    int min = buf[0];
    int pos_min = 0;
    for (int i = 0; i < n; i++)
    {
        if (min > buf[i])
        {
            min = buf[i];
            pos_min = i;
        }
    }
    return pos_min;
}
int Pos_Max(int buf[], int n)
{
    int max = buf[0];
    int pos_max = 0;
    for (int i = 0; i < n; i++)
    {
        if (max < buf[i])
        {
            max = buf[i];
            pos_max = i;
        }
    }
    return pos_max;
}    
int main(void)
{
    int buf[SIZE] = {0};
    Input(buf, SIZE);
    reverse(buf, buf[i]+1, buf[2]);
    Print(buf, SIZE);
    return 0;
}