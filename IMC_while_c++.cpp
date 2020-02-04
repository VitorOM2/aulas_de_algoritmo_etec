#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main (){
	setlocale (LC_ALL,"Portuguese");
	int res;
	float imc,peso,altura;
	
	printf ("Deseja calcular o seu IMC?\n");
	printf ("1 - SIM ou 2 - NÃO: ");
	scanf ("%d",&res);
	system ("CLS");
	
	while (res==1){
		printf ("Digite sua altura: ");
		scanf ("%f",&altura);
		
		printf ("Digite o quanto você está pesando: ");
		scanf ("%f",&peso);
		
		imc = peso /(altura*altura);
		
		if ( imc < 18){
			printf ("Sua classificação é: Magreza\n");
			printf ("Deseja calcular o seu IMC?\n");
			printf ("1 - SIM ou 2 - NÃO: ");
			scanf ("%d",&res);
			system ("CLS");			
		}
		else {	
			if(imc > 18 && imc<24 ){
			printf ("Sua classificação é: Saudável\n");
			printf ("Deseja calcular o seu IMC?\n");
			printf ("1 - SIM ou 2 - NÃO: ");
			scanf ("%d",&res);
			system ("CLS");
			}
			else{			
				if (imc > 25,0 && imc<= 29,9){
				printf ("Sua classificação é: Sobrepeso\n");
				printf ("Deseja calcular o seu IMC?\n");
				printf ("1 - SIM ou 2 - NÃO: ");
				scanf ("%d",&res);
				system ("CLS");}
				else{
					 if (imc <= 30,0)
					printf ("Sua classificação é; Obesidade\n");
					printf ("Deseja calcular o seu IMC?\n");
					printf ("1 - SIM ou 2 - NÃO: ");
					scanf ("%d",&res);
					system ("CLS");			
				}
			}
		}
	}
}
