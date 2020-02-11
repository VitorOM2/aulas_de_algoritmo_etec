/*Declaração das bibliotecas*/
#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
/*Fim da declaração das bibliotecas*/

/*Algoritmo que informa o peso ideal de 15 pessoas*/
int main()
{
   /*Função que deixa o algoritmo reconhecer caracteres em português*/
	   setlocale (LC_ALL,"Portuguese");
   /**/
 
    /*Declaração das variaveis*/ 
	   float altura, pesomasc, pesofem, sexo;
	   int i=0;
    /*Fim da declaração das variaveis*/
 
	   /*Laço de repetição para contar quantas pessoas ja fizeram o procedimento*/
	   while (i<15){
       
        /*perguntas para coletar os dados*/
		      printf ("Informe sua altura: "); 
		      scanf("%f",&altura);
     
		      printf ("Informe seu sexo 0-para Masculino 1-para Feminino: "); 
		      scanf	("%f",&sexo);

        /*Aumenta em 1 o contador de pessoas*/
		      i++;
    /*Estrutura de decisão*/
		  if (sexo == 0){
       /*conta para calcular o peso ideal masculino*/
			    pesomasc = (72.7 * altura) - 58;
       /*resultado*/
			    printf("Peso ideal = %.2f\n\n",pesomasc);
		}
 
		  else if (sexo== 1) {
       /*conta para calcular o peso ideal feminino*/
		     pesofem = (62.1 * altura) - 44.7;
       /*resultado*/
		     printf("Peso ideal = %.2f\n\n",pesofem);
		}
	}
 
return 0;
}	
