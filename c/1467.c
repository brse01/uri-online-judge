#include <stdio.h>
#include <stdlib.h>
void result(int a, int b, int c);


int main(){

int a,b,c;
	while(scanf("%d%d%d",&a,&b,&c)!= EOF){
		result(a,b,c);
	}
	return 0;
}


void result(int a, int b, int c){
if (a == b && b == c){
    printf("*\n");    
}else if (a == b && b != c){
    printf("C\n");
}else if (a == c && b != c){
  	printf("B\n");
}else if (c == b && a != c){
     printf("A\n");
}

}