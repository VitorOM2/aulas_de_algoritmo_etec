/*Declaração das bibliotecas*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Fim da declaração das bibliotecas*/

/*Algoritmo para ver quantos anos uma pessoa vai ter em 2050*/
int main(){
	
	/*Função que deixa o algoritmo reconhecer caracteres em português*/
	setlocale(LC_ALL,"Portuguese");
	
	/*Declaração das variaveis*/ 
	int an,aa,ida,id2050,resp;
	aa=2020;
	/*Fim da declaração das variaveis*/
	
	puts ("Deseja calcular sua idade em 2050?");
	puts ("1 - SIM  ou 2 - NÃO");
		scanf ("%d",&resp);
	
	/*Laço de repetição para contar quantas pessoas ja fizeram o procedimento*/
	while (resp!=1 && resp!=2){
		/*Pergunta inicial para definir o loop*/
		puts ("Deseja calcular sua idade em 2050?");
		puts ("1 - SIM  ou 2 - NÃO");
		scanf ("%d",&resp);	
	}
	while (resp == 1) {
        puts("Digite o ano em que você nasceu ");
        	scanf("%d",&an);
        ida=aa-an;
        id2050=2050-an;
        printf("Sua idade atual é %d\n",ida);
        printf("Sua idade em 2050 será %d\n",id2050);
        puts("Deseja calcular  novamente? ");
		puts("1 – para Sim ou 2 – para Não");
        	scanf("%d",&resp);
       }
	return(0);
	system ("PAUSE");

}
