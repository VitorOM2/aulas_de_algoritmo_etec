#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float nota1,nota2,nota3,nota4,media;
	puts ("********Verifica se o aluno foi aprovado********\n");
	printf ("Informe a primeira nota: ");
	scanf ("%f",&nota1);
	printf ("Informe a segunda nota: ");
	scanf ("%f",&nota2);
	printf ("Informe a terceira nota: ");
	scanf ("%f",&nota3);
	printf ("Informe a quarta nota: ");
	scanf ("%f",&nota4);
	media= (nota1+nota2+nota3+nota4)/4;
	
	system ("PAUSE");
	system ("CLS");
	
	if (media>=9){
		printf("O aluno foi aprovado com nota: A");
		system ("COLOR 27");
	}
	else{
		if (media>=7&&media<9){
			printf("O aluno foi aprovado com a nota: B");
			system ("COLOR 27");
		}
		else{
			if (media>=5&&media<7){
			printf ("O aluno foi aprovado com a nota: C");
			system ("COLOR 27");
			}
			else{
				if (media>2.5&&media<5){
					printf ("O aluno foi reprovado com a nota: D");
					system ("COLOR 40");
				}
				else{
					if(media<2.5){
						printf ("O aluno foi reprovado com a nota: E");
					system ("COLOR 40");						
					}
				}
			}
		}
	}
	return 0;
}
