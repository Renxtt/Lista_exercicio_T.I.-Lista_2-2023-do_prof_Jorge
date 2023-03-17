#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>

main(void){
	setlocale(LC_ALL,"portuguese");
	system("color 50");
	float tabu, loc, loc2,  resu;
	
//003) Dado um número inteiro, exiba sua tabuada.	
	printf("%75s", "Até onde Vai a sua Tabuada: ");
	scanf("%f", &loc);
	
	printf("%90s", "Insirá o Número que você quer colocar a sua Tabuada: ");
	scanf("%f", &tabu);
	
	loc2=1;
	while(loc2<=loc){
		resu=loc2*tabu;
		printf("\n%50.0f * %.0f = %.0f",loc2,tabu, resu);
	//	Sleep(2);
		loc2=loc2+1;			
	}
	
	return 0;
}
