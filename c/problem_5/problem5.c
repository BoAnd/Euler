#include <stdio.h>

int main()
{
    unsigned long long i,j,h ;
    int answer = 0;

    for(i = 1; i < 30000000; i++)
    {
        h = 0;
        for(j = 2; j < 21; j++)
            if(i % j == 0)
            {
             answer = 1; 
            }
            else
            {
                answer = 0;
                break;
            }

        if(answer)
        {
            printf("%d\n",i);
            break;
        }
    }

    return 0;
}
