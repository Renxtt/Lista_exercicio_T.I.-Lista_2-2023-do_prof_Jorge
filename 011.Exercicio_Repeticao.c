#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <windows.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	unsigned int cp = 1252; 
	unsigned int cpin  = GetConsoleCP();
	unsigned int cpout = GetConsoleOutputCP();
	SetConsoleCP(cp);       
	SetConsoleOutputCP(cp);

//011) Elabore um programa que receba 5 números e imprima somente os positivos.
	
	float numeracao_1, numeracao_2, numeracao_3, numeracao_4, numeracao_5;
	
	srand(time(NULL));
	do{
	numeracao_1 = rand() % 20-10;
	numeracao_2 = rand() % 20-10;
	numeracao_3 = rand() % 20-10;
	numeracao_4 = rand() % 20-10;
	numeracao_5 = rand() % 20-10;		
	printf("\ntentando novamente");
	
	
	}while(numeracao_1==numeracao_2||numeracao_1==numeracao_3||numeracao_1==numeracao_4||numeracao_1==numeracao_5||numeracao_2==numeracao_3||numeracao_2==numeracao_4||numeracao_2==numeracao_5||numeracao_3==numeracao_4||numeracao_3==numeracao_5||numeracao_4==numeracao_5);	

	system("Cls");
	printf("Os números positivos são: ");
	for(int i=1;i<2;i++){
		if(numeracao_1>=0){
			printf("%.0f, ", numeracao_1);
		}
		if(numeracao_2>=0){
			printf("%.0f, ", numeracao_2);
		}
		if(numeracao_3>=0){
			printf("%.0f, ", numeracao_3);
		}
		if(numeracao_4>=0){
			printf("%.0f, ", numeracao_4);
		}
		if(numeracao_5>=0){
			printf("%.0f, ", numeracao_5);
		}
	}
	printf("\n\nE os números Negativo são: ");
	for(int i=1;i<2;i++){
		if(numeracao_1<0){
			printf("%.0f, ", numeracao_1);
		}
		if(numeracao_2<0){
			printf("%.0f, ", numeracao_2);
		}
		if(numeracao_3<0){
			printf("%.0f, ", numeracao_3);
		}
		if(numeracao_4<0){
			printf("%.0f, ", numeracao_4);
		}
		if(numeracao_5<0){
			printf("%.0f, ", numeracao_5);
		}
	}	
	
	return 0;
}
