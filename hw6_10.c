#include <stdio.h>
void print_simple(int n);
int main(void)
{
int n;
    scanf("%d",&n);
    print_simple(n);
    return 0;
}
 
void print_simple(int n)
{
    for (int i = 2; i !=1; i++)
    {
        if(n%i==0)
        {
            printf("%d ",);
            n/=div;
        }
        else
            div++;
    }  
}
