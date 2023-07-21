#include <stdio.h>
//2.Գրեք ծրագիր, որը օգտվողին թույլ կտա մուտքագրել char-երի զանգված և դուրս կբերի բոլոր թվերը:
void num(char a)
{
  if(a >= '0' && a <= '9')
    printf("%c\n", a);
}

int main()
{
  int n = 0;
  scanf("%i", &n);
  char str[n];
  scanf("%s", str);
  for(int i = 0; i < n; ++i)
  {
    num(str[i]);
  }
    
    
  return 0;
}