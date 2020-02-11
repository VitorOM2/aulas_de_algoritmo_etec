#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main (){
	int lanche;
	setlocale(LC_ALL,"Portuguese");
	puts ("lanches: \n 1-BigMac\n 2-Quarteirão\n 3-MacChiquen\n 4-Cheddar MacMelt\n 5-MacMax\n");
	printf ("Informe o número do Lanche: ");
	scanf ("%d",&lanche);
	switch (lanche){
	
		case 1 : {
			printf ("O lanche escolhido é o BigMac \n");
			break;
		}
		case 2 : {
			printf ("O lanche escolhido é o Quarteirão\n");
			break;
		}
		case 3 : {
			printf ("O lanche escolhido é o MacChiquen \n");
			break;
		}
		case 4 : {
			printf ("O lanche escolhido é o Cheddar MacMelt \n");
			break;
		}
		case 5 : {
			printf ("O lanche escolhido é o MacMax \n");
			break;
		}
		default : 
		printf ("Lanche invalido \n");
		break;
	}
	system ("PAUSE");
	return 0;
}

