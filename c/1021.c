#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 6

int main(){

	int notas[]={100, 50, 20, 10, 5, 2};
	int notasRes[12];
	double moedas[]={1, 0.50, 0.25, 0.10, 0.05,0.01};

	int i;
	double value;
	scanf("%lf",&value);		

	double partInt;
	int partIn;
	double partFracio = modf(value,&partInt);
	partIn = (int) partInt;


	/*
	for(i =0; i< MAX; i++){
		if(partIn < notas[i]) notasRes[i] =0;
		while(partIn > notas[i]){			
			notasRes[i] = partIn/notas[i];			
			partIn -= notas[i]* notasRes[i];			
		}
	}	
	if(partIn > moedas[i]){
		notasRes[i] = partIn/ (int) moedas[i];
		partIn =0;
	}
	*/		
	for(i=0; i< MAX*2; i++){
	if(partFracio < moedas[i]) notasRes[i]=0;

	while(partFracio > moedas[i]){
		printf("%lf\n",partFracio / moedas[i+1]);
		
		
	}
	}
	

	return 0;	
}