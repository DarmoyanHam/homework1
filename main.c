#include <stdio.h>
//Գրեք ծրագիր, որը օգտվողին թույլ կտա մուտքագրել char-երի զանգված մուտքագրում և տպում այն հակառակ    հերթականությամբ։


int main()
{
  int n = 0;
  scanf("%i", &n);
  char str[n];
  scanf("%s", str);
  for(int i = n - 1; i >= 0; --i)
  {
      printf("%c", str[i]);
  }
    
  return 0;
}