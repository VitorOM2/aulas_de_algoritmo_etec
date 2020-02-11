#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int mes;
	puts ("********Identificador do mês********\n");
	printf ("Informe o numero do mês escolhido: ");
	scanf ("%d",&mes);
	switch (mes){
		case 1 : {
			puts ("O mês é: Janeiro");
			break;
		}
		case 2 : {
			puts ("O mês é: Fevereiro");
			break;
		}
		case 3 : {
			puts ("O mês é: Março");
			break;
		}
		case 4 : {
			puts ("O mês é: Abril");
			break;
		}
		case 5 : {
			puts ("O mês é: Maio");
			break;
		}
		case 6 : {
			puts ("O mês é: Junho");
			break;
		}
		case 7 : {
			puts ("O mês é: Julho");		
			break;
		}
		case 8 : {
			puts ("O mês é: Agosto");
			break;
		}
		case 9 : {
			puts ("O mês é: Setembro");	
			break;
		}
		case 10 : {
			puts ("O mês é: Outubro");	
			break;
		}
		case 11 : {
			puts ("O mês é: Novembro");	
			break;
		}
		case 12 : {
			puts ("O mês é: Dezembro");	
			break;
		}
		default : 
			puts ("Numero do mês é invalido");
		break;		
	}
}
