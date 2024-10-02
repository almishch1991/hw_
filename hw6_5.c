#include <stdio.h>
int sum(int n) 
{ 
  int i;
  int sum_1 = 0;
  for (i = 1; i <= n; i++)
  {
   sum_1 +=  i;
  }
return (sum_1); 
}
int main(void)
{
    int n, p;
    scanf("%d", &n);
    printf("%d\n", sum(n));
    return 0;
}