#include <stdio.h>

int main()
{
    int i;
    int num = 0;

    for(i = 1; i < 1000; i++)
    {
        if(i % 3 == 0 || i % 5 == 0)
            num += i;
    }

    printf("Answer: %d\n",num);
    return 0;
}
