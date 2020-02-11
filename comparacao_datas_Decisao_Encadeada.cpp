#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	int d1,d2,m1,m2,ano1,ano2,data1,data2;
	
	puts("********Comparação entre Datas********");	
	printf ("Informe o primeiro dia: ");
	scanf ("%d",&d1);
	printf ("Informe o primeiro mês: ");
	scanf ("%d",&m1);
	printf ("Informe o primeiro ano: ");
	scanf ("%d",&ano1);
	printf ("Informe o segundo dia: ");
	scanf ("%d",&d2);
	printf ("Informe o segundo mês: ");
	scanf ("%d",&m2);	
	printf ("Informe o segundo ano: ");
	scanf ("%d",&ano2);
	data1 = (ano1 * 100 + m1)*100 + d1;
	data2 = (ano2 * 100 + m2)*100 + d2;
	if (data1<data2){
		printf ("data1: %d/%d/%d - data2: %d/%d/%d",d1,m1,ano1,d2,m2,ano2);
	}	
	else {
		printf ("data2: %d/%d/%d - data1: %d/%d/%d",d2,m2,ano2,d1,m1,ano1);
	}
	return 0;
}
