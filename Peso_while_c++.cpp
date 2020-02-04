#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main()
{
setlocale (LC_ALL,"Portuguese");
float altura, pesomasc, pesofem, sexo;
int i=0;
while (i<15){

printf ("Informe sua altura: "); 
scanf("%f",&altura);
printf ("Informe seu sexo 0-para Msculino 1-para Feminino: "); 
scanf	("%f",&sexo);

i++;
 
if (sexo == 0){
pesomasc = (72.7 * altura) - 58;
printf("Peso ideal = %.2f\n\n",pesomasc);
}
 
else if (sexo== 1) {
pesofem = (62.1 * altura) - 44.7;
printf("Peso ideal = %.2f\n\n",pesofem);
}
}
 
return 0;
}	
 
