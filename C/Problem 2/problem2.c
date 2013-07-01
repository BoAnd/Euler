#include <stdio.h>

int main()
{
    int i = 3;
    unsigned long tmp;
    unsigned long prev = 1;
    unsigned long next = 2;
    unsigned long answer = 2;
    printf("1: %d\n",prev);
    printf("2: %d\n",next);
    for(i = 3; i < 33; ++i)
    {
        tmp = prev + next;
        prev = next;
        next = tmp;
        printf("%d: %d\n",i,next);
        if(next % 2 == 0)
            answer += next;
    }
    printf("Answer: %d",answer);
    return 0;
}
