#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	
	int base,h,area,i=0;
		
	puts ("AREA E BASE DO RET�NGULO\n\n");
	
	while (i<10){
		
		printf ("Informe a altura do ret�ngulo: ");
		scanf ("%d",&h);
		
		printf ("Informe a base do ret�ngulo: ");
		scanf ("%d",&base);
		
		area = base*h;
		
		printf ("A �rea do ret�ngulo � : %d\n\n",area);
		
		i++;		
		Sleep (1000);
	}
	return 0;
	system ("PAUSE");
}
