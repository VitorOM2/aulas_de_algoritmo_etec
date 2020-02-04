#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>
int main (){
	setlocale(LC_ALL,"Portuguese");
	
	int tab=7,res,num=1;
	
	puts ("********TABUADA DO NÚMERO 7********");
	
	while (num<=10){
		system ("COLOR 02");
		Sleep(1000);
		res=num*tab;
		
		printf("%d X %d = %d\n",num,tab,res);
		num++;
	}
	
	return 0;
	system ("PAUSE");
	
}
