#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int idade;
	puts ("********Categoria de nadadores********\n");
	printf("Informe a sua idade: ");
	scanf ("%d",&idade);
	
	system ("PAUSE");
	system ("CLS");
	
	if (idade>=5&&idade<=7){
		puts ("A sua categoria �: Infantil A");
	}
	else{
		if(idade>=8&&idade<=10){
			puts ("A sua categoria �: Infantil B");
		}
		else{
			if (idade>=11&&idade<=13){
				puts ("A sua categoria �: Juvenil A");
			}
			else{
				if (idade>=14&&idade<=17){
					puts ("A sua categoria �: Juvenil B");
				}
				else{
					if (idade>=18){
						puts ("a sua categoria �: Senior");
					}
				}
			}
		}
	}
	return 0;
}
