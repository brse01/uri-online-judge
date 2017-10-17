#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <stdlib.h>
using namespace std;

int cmp(int a, int b);
int dados[10001];
int main()
{

    int n,num,i;

    scanf("%d",&n);
    scanf("%d",&num);
    for(i=0; i< n; i++)
        scanf("%d",&dados[i]);

    sort(dados,dados+n,cmp);
    i = num;
    while(dados[num-1] == dados[i] && i != n){
        num++;
        i++;
    }
    printf("%d\n",num);
    return 0;
}


int cmp(int a, int b){
    return a > b;
}