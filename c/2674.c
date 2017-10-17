#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void divDig(long long int n);
int isCousin(long long int n);

int main()
{

    long long int  n;
    while(scanf("%lld",&n)!= EOF)
    {
        divDig(n);
    }
    return 0;
}

void divDig(long long int n)
{
    long long int rest, resultCousin;
    long long int sumDigi =0;
    int flag =0;
    int flag2;
    flag2 = isCousin(n);

    if(flag2 == 1)
    printf("Nada\n");

    while(n != 0)
    {
        rest = n % 10;
        n = n/10;
        if(rest != 1 && rest !=0)
        {
            resultCousin=ehPrimo(rest);
            if(resultCousin !=1)
                flag++;
        }
        sumDigi++;
    }

    if(flag2 == 0 && sumDigi == flag)
    {
        printf("Super\n");
    }
    else if(flag2 == 0 && sumDigi > flag)
    {
       printf("Primo\n");
    }

}


int isCousin(long long int n)
{
    long long int p;
    if(n==0 || n=1) return 1;
    for(p = 2; p*p <= n; p++)
        if(n % p == 0) return 1;
    return 0;
}

