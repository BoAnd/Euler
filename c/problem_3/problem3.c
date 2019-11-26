#include <stdio.h>

int prime[1000000];
int idx = 2;

int isprime(int num)
{
    int z;
    for(z = 2; z < idx; ++z)
    {
        if(num % z == 0)
            return  0;
    }
    prime[++idx] = num;
    return 1;
}

int main()
{
    int i,z;
    prime[0] = 2;
    prime[1] = 3;
    prime[2] = 5;

    for(i = 5; i < 1000000; ++i)
    {
        if(isprime(i)){}
    }

    for(i = 0; i < idx; ++i)
    {
        if(600851475143 % prime[i] == 0)
            printf("P: %d\n", prime[i]);
    }

    return 0;
}
