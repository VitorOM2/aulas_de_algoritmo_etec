#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <locale.h>

/*Algoritmo que simula um saldo de um depósito após alguns meses sendo remunerado com juros*/
int main (){
	
	/*setlocale deixa o algoritmo em português*/
	setlocale (LC_ALL,"Portuguese");
	
	/*Declaração das variaveis*/
	float dep,taxa=1,saldof;
	dep = 500.00;
	/*Fim da declaração das variaveis*/
	
	/*Mensagem inicial*/
	puts ("Bem vindo(a)");
	printf ("O seu saldo incial era de R$ %.2f\n",dep);
	
	/*Laço de repetição para calcular os juros nos meses seguintes*/
	while (taxa<=3){;
		saldof = (dep*(taxa/100)+dep);
		printf("O seu saldo após um mês sendo remunerado com juros vai ser de : R$ %.2f\n",saldof);
		Sleep 
		taxa++;
	/*Fim do laço de repetição*/		
		
	}
	return 0;
	system ("PAUSE");
}
