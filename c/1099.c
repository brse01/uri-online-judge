/*


Leia um valor inteiro N que é a quantidade de casos de teste que vem a seguir. Cada caso de teste consiste de dois inteiros X e Y. Você deve apresentar a soma de todos os ímpares existentes entre X e Y.
Entrada

A primeira linha de entrada é um inteiro N que é a quantidade de casos de teste que vem a seguir. Cada caso de teste consiste em uma linha contendo dois inteiros X e Y.
Saída

Imprima a soma de todos valores ímpares entre X e Y.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int processInformation(int x,int y);


int main(){
	int n,x,y;
	int soma=0;
	scanf("%d",&n);
	while(n >0){
		scanf("%d%d",&x,&y);		
		if(x != y){
		printf("%d\n",processInformation(x,y));
		}else{
			printf("0\n");
		}

		n--;		
	}

	return 0;
}

int processInformation(int x,int y){
int aux;
if(x > y){
	aux =x;x =y;y=aux;
}
aux =0;
x++;
while(x < y){
	if(x % 2 !=0){
		aux+=x;
	}
	x++;
}
return aux;

}