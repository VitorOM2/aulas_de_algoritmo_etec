#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL,"Portuguese");
	float dep,taxa=1,saldof;
	dep = 500.00;
	
	puts ("Bem vindo(a)");
	printf ("O seu saldo incial era de R$ %.2f\n",dep);
	
	while (taxa<=3){;
		saldof = (dep*(taxa/100)+dep);
		printf("O seu saldo após um mês sendo remunerado com juros vai ser de : R$ %.2f\n",saldof);
		Sleep 
		taxa++;
		
	}
	return 0;
	system ("PAUSE");
}
