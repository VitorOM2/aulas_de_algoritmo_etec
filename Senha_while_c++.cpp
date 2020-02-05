/*Declaração das bibliotecas*/
#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/*Fim da declaração das bibliotecas*/
/*Algoritmo que um login com senha.Se errar a senha três vezes o programa fecha*/
int main (){
	/*Deixa o algoritmo em português*/
	setlocale (LC_ALL,"Portuguese");
	
	/*Declaração das variaveis*/ 
	int resp;
	int i=0;
	/*Declaração da senha*/
	char senha[6]="asdfg";
	/*Fim da declaração das variaveis*/
	
	/*Laço de repetição que conta os erros*/
	while (i<3){
	
	/*pergunta para digitar a senha*/
	printf ("Digite a senha: ");
	scanf ("%s",senha);
		
		/*Laço de decisão*/ 
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
