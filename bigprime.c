#include<stdio.h>

int bigprime(int[]);

int main() 
{
    int i, a, n[10];

    printf("\n enter 10 random numbers: ");
    for(i=0; i<10; i++)
    {
        scanf("%d",&n[i]);
    }

    a = bigprime(n);

    if(a == 0)
    {
        printf("\n no prime numbers in the given set \n");
    }
    else 
    {
        printf("\n highest prime in the given set: %d \n", a);
    }

    return 0;
}

int bigprime(int n[10]) 
{
    int i, big, j, count;
    count = 0;
    big = 0; 

    for(i=0; i<10; i++)
    {
        for(j=1; j<=n[i]; j++)
        {
            if(n[i]%j == 0)
            {
                count++;
            }
        }
        if(count == 2)
        {
            if(n[i]>big)
            {
                big = n[i];
            }
        }

        count = 0;
    }

    if(big != 0)
    {
        return big;
    }

    return 0;
}
