#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
    float p,altura,h,imc;
    puts ("********Calculo do IMC********");
    printf("Digite o seu peso: ");
    scanf("%f",&p);
    
    printf("Digite a sua altura: ");
    scanf("%f", &altura);
	system ("pause");
	system ("CLS");
	h = (altura*altura);
    imc = p /h;
    
    if	(imc<18){
    	printf("O seu Idice de Massa Corporea � %.2f e sua classifica��o �: magreza\n", imc );
	}
    if (imc >18.00 && imc<24.9){
        printf("O seu Idice de Massa Corporea � %.2f e sua classifica��o �: saudavel\n", imc );
        }
        
    if (imc >=25 && imc<29.9){
       printf ("O seu Indice de Massa Corporea � %.2f e sua classifica��o �: sobrepeso\n", imc);
       }
    
    if (imc >=30.0){
       printf("O seu Indice de Massa Corporea � %.2f e sua classifica��o �: Obesidade\n", imc);
       }
    system("pause");
                
}
