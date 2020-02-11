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
		puts ("A sua categoria é: Infantil A");
	}
	else{
		if(idade>=8&&idade<=10){
			puts ("A sua categoria é: Infantil B");
		}
		else{
			if (idade>=11&&idade<=13){
				puts ("A sua categoria é: Juvenil A");
			}
			else{
				if (idade>=14&&idade<=17){
					puts ("A sua categoria é: Juvenil B");
				}
				else{
					if (idade>=18){
						puts ("a sua categoria é: Senior");
					}
				}
			}
		}
	}
	return 0;
}
