#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int mes;
	puts ("********Identificador do m�s********\n");
	printf ("Informe o numero do m�s escolhido: ");
	scanf ("%d",&mes);
	switch (mes){
		case 1 : {
			puts ("O m�s �: Janeiro");
			break;
		}
		case 2 : {
			puts ("O m�s �: Fevereiro");
			break;
		}
		case 3 : {
			puts ("O m�s �: Mar�o");
			break;
		}
		case 4 : {
			puts ("O m�s �: Abril");
			break;
		}
		case 5 : {
			puts ("O m�s �: Maio");
			break;
		}
		case 6 : {
			puts ("O m�s �: Junho");
			break;
		}
		case 7 : {
			puts ("O m�s �: Julho");		
			break;
		}
		case 8 : {
			puts ("O m�s �: Agosto");
			break;
		}
		case 9 : {
			puts ("O m�s �: Setembro");	
			break;
		}
		case 10 : {
			puts ("O m�s �: Outubro");	
			break;
		}
		case 11 : {
			puts ("O m�s �: Novembro");	
			break;
		}
		case 12 : {
			puts ("O m�s �: Dezembro");	
			break;
		}
		default : 
			puts ("Numero do m�s � invalido");
		break;		
	}
}
