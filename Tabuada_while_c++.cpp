/*Declaração das bibliotecas*/
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>
/*Fim da declaração das bibliotecas*/

/*Algoritmo da tabuada do sete*/
int main (){
	
	/*Função que deixa o algoritmo reconhecer caracteres em português*/
	setlocale(LC_ALL,"Portuguese");
	
	/*Declaração das variaveis*/ 
	int tab=7,res,num=1;
	
	/*Mensagem inicial*/
	puts ("********TABUADA DO NÚMERO 7********");
	
	/*Laço de repetição*/
	while (num<=10){
		system ("COLOR 02");
		Sleep(1000);
		res=num*tab;
		
		printf("%d X %d = %d\n",num,tab,res);
		num++;
	}
	
	return 0;
	system ("PAUSE");
	
}
