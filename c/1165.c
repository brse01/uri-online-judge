#include <stdio.h>
#include <stdlib.h>


int isCousin(long long int n);

int main(){
	int n,x;
	scanf("%d",&n);
    while(n > 0)
    {
    	scanf("%d",&x);
    	if(isCousin(x)== 1)
            printf("%d nao eh primo\n",x);
        else
            printf("%d eh primo\n",x);
    	n--;
    }
    return 0;
}



int isCousin(long long int n)
{
    long long int p;
    if(n==0 || n=1) return 1;
    for(p = 2; p*p <= n; p++)
        if(n % p == 0) return 1;
    return 0;
