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
	
	
//002) Criar um programa que imprima na tela os números de 0 a 10 em ordem decrescente.
	
	int i, o;
	
	for(i=10 ; i>=0; i--){
		printf("%d", i);
		Sleep(1000);
		system("Cls");
	}
	
	return 0;

}
