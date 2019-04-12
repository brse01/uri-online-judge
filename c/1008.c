#include <stdio.h>

int main(){ 
	int quantidade_empregados,horas; 
	double quantidade_hora, salario;

	scanf("%d %d", &quantidade_empregados, &horas); 
	scanf("%lf", &quantidade_hora); 
	salario = (horas) * (quantidade_hora); 

	printf("NUMBER = %d\nSALARY = U$ %.2lf\n", quantidade_empregados, salario);

}