#include <stdio.h>

int mdc(int a, int b){
	if(b == 0) return a;
	else return mdc(b, a % b);
}

int main(int argc, char const *argv[])
{
	int n, a,b;
	scanf("%d",&n);
	for (int i = 0; i < n; ++i){
		scanf("%d %d",&a,&b);
		printf("%d\n",mdc(a,b));
	}
	printf("\n");
	return 0;
}