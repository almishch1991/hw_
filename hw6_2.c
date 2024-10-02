#include <stdio.h>
int pow(int n, int p) 
{ 
  int i;
  int result = 1;
  for (i = 1; i <= p; i++)
  {
   result *=  n;
  }
return (result); 
}
int main(void)
{
    int n, p;
    scanf("%d %d", &n, &p);
    printf("%d\n", pow (n, p));
    return 0;
}