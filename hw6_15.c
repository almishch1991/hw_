#include <stdio.h>
 
int foward(int n)
{
int count = 0;
   for (; n > 0; n /= 10)
        {
        int num_1 = n % 10;
        int num_2 = (n / 10) % 10;
        if ( num_1 <= num_2)
        {
        count++;
        }
        }
        return (count == 0); 
        
}
 
int main()
{
int n;
    scanf("%d", &n);
   foward (n)? printf("YES") : printf("NO");
    return 0;
}
