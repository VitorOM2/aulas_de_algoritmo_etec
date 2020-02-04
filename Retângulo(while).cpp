#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	
	int base,h,area,i=0;
		
	puts ("AREA E BASE DO RETÂNGULO\n\n");
	
	while (i<10){
		
		printf ("Informe a altura do retângulo: ");
		scanf ("%d",&h);
		
		printf ("Informe a base do retângulo: ");
		scanf ("%d",&base);
		
		area = base*h;
		
		printf ("A área do retângulo é : %d\n\n",area);
		
		i++;		
		Sleep (1000);
	}
	return 0;
	system ("PAUSE");
}
