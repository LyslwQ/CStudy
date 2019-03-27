#include <stdio.h>

int test(int i)
{
  static int j = 0;
  j = i;
  return j;
}

int main()
{
  int i = 0;
  int j = 0;
  for(;i<10;++i)
      {
        j = test(i);
        printf("%d\n",j);
      }
  return 0;
}
