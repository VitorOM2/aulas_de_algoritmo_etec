/*Declaração das bibliotecas*/
#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/*Fim da declaração das bibliotecas*/

/*Algoritmo que calcula o IMC*/
int main (){
	
	/*Função que deixa o algoritmo reconhecer caracteres em português*/
	setlocale (LC_ALL,"Portuguese");
	/**/
	
	/*Declaração das variaveis*/
	int res;
	float imc,peso,altura;
	/*Fim da declaração das variaveis*/
	
	/*Pergunta inicial*/
	printf ("Deseja calcular o seu IMC?\n");
	printf ("1 - SIM ou 2 - NÃO: ");
	scanf ("%d",&res);
	
	/*Comando para limpar a tela*/
	system ("CLS");
	
	/*Laço de repetição que depende da pergunta inicial*/
	while (res==1){
		
		/*Perguntas para pegar os dados da conta*/
		printf ("Digite sua altura: ");
		scanf ("%f",&altura);
		
		printf ("Digite o quanto você está pesando: ");
		scanf ("%f",&peso);
		
		/*Calculo do IMC*/
		imc = peso /(altura*altura);
		
		/*Decisão encadeada heterogênea*/
		
		/*Resultado*/
		if ( imc < 18){
			printf ("Sua classificação é: Magreza\n");
			
			/*pergunta para reiniciar o loop*/
			printf ("Deseja calcular o seu IMC?\n");
			printf ("1 - SIM ou 2 - NÃO: ");
			scanf ("%d",&res);
			
			/*comando para limpar a tela*/
			system ("CLS");			
		}
		
		else {	
			/*Resultado*/
			if(imc > 18 && imc<24 ){
			printf ("Sua classificação é: Saudável\n");
				
			/*pergunta para reiniciar o loop*/	
			printf ("Deseja calcular novamente o seu IMC?\n");
			printf ("1 - SIM ou 2 - NÃO: ");
			scanf ("%d",&res);
				
			/*comando para limpar a tela*/
			system ("CLS");
			}
			
			else{	
				/*Resultado*/
				if (imc > 25,0 && imc<= 29,9){
				printf ("Sua classificação é: Sobrepeso\n");
					
				/*pergunta para reiniciar o loop*/	
				printf ("Deseja calcular novamente o seu IMC?\n");
				printf ("1 - SIM ou 2 - NÃO: ");
				scanf ("%d",&res);
					
				/*comando para limpar a tela*/					
				system ("CLS");}
				
				else{
					/*Resultado*/
					 if (imc <= 30,0)
					printf ("Sua classificação é; Obesidade\n");
					
					/*pergunta para reiniciar o loop*/
					printf ("Deseja calcular novamente o seu IMC?\n");
					printf ("1 - SIM ou 2 - NÃO: ");
					scanf ("%d",&res);
					
					/*comando para limpar a tela*/
					system ("CLS");			
				}
			}
		}
	}
	/*Fim da decisão heterogênea*/
	return 0;
}

