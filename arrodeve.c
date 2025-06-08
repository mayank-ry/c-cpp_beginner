#include <stdio.h>
void main()
{
    int a[6] = {10, 5, 11, 14, 17, 6};
    int even = 0, odd = 0, i;
    for (i = 0; i < 6; i++)
    {
        if (a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        
    }
    printf("number of even=%d and number of odd is = %d",even,odd);
}
