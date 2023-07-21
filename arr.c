#include <stdio.h>
//Գրեք ծրագիր, որը օգտվողին թույլ կտա մուտքագրել զանգվածի էլեմենտների արժեքները, այնուհետև դրանք տպել էկրանին: Զանգվածը կարող է լինել ցանկացած տիպի։

int main()
{
    int n = 0;
    scanf("%i", &n);
    int arr[n];
    for(int i = 0; i < n; ++i)
    {
        scanf("%i", &arr[i]);
    }
    for(int i = 0; i < n; ++i)
    {
        printf("%i ", arr[i]);
    }
    printf("\n");
    
    return 0;
}