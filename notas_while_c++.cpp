/*Declaração das variaveis*/
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>
/*Fim da declaração das variaveis*/

int main (){
	setlocale (LC_ALL,"Portuguese");
	
	/*Declaração das variaveis*/
	int n1,n2,n3,n4,md,x=0;
	char nome;
	/*Fim da declaração das variaveis*/
	
	puts ("NOTAS E MÉDIAS DOS ALUNOS");
	
	/*Laço de repetição*/
	while (x<7){
	
		printf ("Informe o nome do aluno: ");
		scanf ("%s",&nome);
		
		printf ("Informe a primeira nota: ");
		scanf ("%d",&n1);
		
		printf ("Informe a segunda nota: ");
		scanf ("%d",&n2);
		
		printf ("Informe a terceira nota: ");
		scanf ("%d",&n3);
		
		printf ("Informe a quarta nota: ");
		scanf ("%d",&n4);
		
		md = (n1+n2+n3+n4)/4;
		
		printf ("A média do aluno foi: %d\n\n",md);
	
		/*Contador*/
		x++;
		Sleep (1000);
	}
	return 0;
	system ("PAUSE");	
}

