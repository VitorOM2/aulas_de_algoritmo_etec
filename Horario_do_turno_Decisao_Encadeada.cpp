#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main (){
	float ht;
	setlocale(LC_ALL,"Portuguese");
	puts ("********Horario do turno de trabalho********");
	printf ("Informe o horário do turno de trabalho: ");
	scanf ("%f",&ht);
	
	system ("Pause");
	system ("CLS");
	
	if (ht>=5.00 && ht<=12.59){
		printf ("Turno de trabalho matinal" );
	}	
		else{
			if(ht>=13.00 && ht<= 20.59){
				printf ("Turno de trabalho vespertino");
			}
			else{
				if(ht>=21.00 && ht>=24.00 || ht>=0 && ht<=4.59){
					printf("Turno de trabalho noturno");
				}
				else{
					printf ("Turno de trabalho invalido");
				}
			}
		}
	return 0;		
}
