/*Declaração das bibliotecas*/
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>
/*Fim da declaração das bibliotecas*/

/*Algoritmo que calcula a área de 10 retângulos*/
int main (){
	/*setlocale deixa o algoritmo em português*/
	setlocale(LC_ALL,"Portuguese");
	
	/*Declaração das variaveis*/
	int base,h,area,i=0;
	/*Fim da declaração das variaveis*/
	
	/*Mensagem inicial*/
	puts ("AREA E BASE DO RETÂNGULO\n\n");
	
	/*Laço de repetição*/
	while (i<10){
		
		/*Perguntas para coletar os dados do retângulo*/
		printf ("Informe a altura do retângulo: ");
		scanf ("%d",&h);
		
		printf ("Informe a base do retângulo: ");
		scanf ("%d",&base);
		
		/*calculo da area*/
		area = base*h;
		
		/*resultado*/
		printf ("A área do retângulo é : %d\n\n",area);
		
		/*contador*/
		i++;		
		Sleep (1000);
	}
	return 0;
	system ("PAUSE");
}
