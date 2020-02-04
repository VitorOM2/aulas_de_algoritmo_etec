#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (){
	setlocale (LC_ALL,"Portuguese");
	int resp;
	int i=0;
	
	char senha[6]="asdfg";

	while (i<3){	
	printf ("Digite a senha: ");
	scanf ("%s",senha);
		if (strcmp(senha,"asdfg")==0){
			system ("CLS");
			printf ("Bem vindo(a)!\n\n");
			break;
		}
		else if (strcmp(senha,"asdfg")!=0){
			printf ("Senha incorreta\n\n");
			i++;
		}
	}
	return 0;
}
