#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main (){
	int lanche;
	setlocale(LC_ALL,"Portuguese");
	puts ("lanches: \n 1-BigMac\n 2-Quarteir�o\n 3-MacChiquen\n 4-Cheddar MacMelt\n 5-MacMax\n");
	printf ("Informe o n�mero do Lanche: ");
	scanf ("%d",&lanche);
	switch (lanche){
	
		case 1 : {
			printf ("O lanche escolhido � o BigMac \n");
			break;
		}
		case 2 : {
			printf ("O lanche escolhido � o Quarteir�o\n");
			break;
		}
		case 3 : {
			printf ("O lanche escolhido � o MacChiquen \n");
			break;
		}
		case 4 : {
			printf ("O lanche escolhido � o Cheddar MacMelt \n");
			break;
		}
		case 5 : {
			printf ("O lanche escolhido � o MacMax \n");
			break;
		}
		default : 
		printf ("Lanche invalido \n");
		break;
	}
	system ("PAUSE");
	return 0;
}

