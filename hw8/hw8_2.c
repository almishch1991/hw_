#include <stdio.h>
#include <inttypes.h>
#define SIZE 5
int Input (int n, int buf[])
{
    int i;
    for ( i = 0; i < n; i++)
    scanf ("%d ", &buf[i]);
    return i;
}

void Print (int n, int buf[])
{
    for (int i = 0; i < n; i++)
    printf ("%d ", buf[i]);
    printf ("\n");
}

int Min(int len, int buf[])
{   
    int min = buf [0];
    for (int i = 1; i < len; i++)
    {
    if (min > buf[i])
     min = buf[i];
     return min;
}
}
int main (void)
{
    int buf[SIZE];
    Input(SIZE, buf);
    Print(SIZE, buf);
       
    return 0;
}