#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int an,aa,ida,id2050,resp;
	aa=2019;
	
	puts ("Deseja calcular sua idade em 2050?");
	puts ("1 - SIM  ou 2 - NÃO");
		scanf ("%d",&resp);
		
	while (resp!=1 && resp!=2){
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
