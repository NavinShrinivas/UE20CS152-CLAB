#include<stdbool.h>

bool isprime(int n)
{
    for(int i=2;i*i<=n+1;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int nextprime(int n)
{
    int c=n+1;
    while(isprime(c)==false)
        c++;
    return c;
}
