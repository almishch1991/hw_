#include <stdio.h>
unsigned long long mult(int n) 
{ 
  
unsigned long long mult_1 = 1;
  for (int i = 1; i <= n; i++)
  {
    if ( i == 1)
    mult_1 = i;
    else 
   mult_1 *= 2; 
  }
return (mult_1); 
}
unsigned long long main(void)
{
    int n;
    scanf("%d", &n);
    printf("%lld\n", mult (n));
    return 0;
}