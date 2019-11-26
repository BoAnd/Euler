#include <stdio.h>

int main()
{
    int i,j;

    for(i = 999; i > 0; i--)
        if(906609 % i == 0)
            printf("%d * %d = %d\n", i,906609/i, 906609 );

    return 0;
}
