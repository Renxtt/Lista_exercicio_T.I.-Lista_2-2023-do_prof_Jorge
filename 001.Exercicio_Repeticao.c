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
	
	
//001) Criar um programa que imprima na tela os números de 0 a 10 em ordem crescente.
	int i;
	
	for(i=0;i<=10;i++){
		//começar em 0
		//repitir enquanto i=10
		// e toda vez que o for roda adiciona mais 1 i++
		printf("\n%d", i);
		Sleep(1000);
		system("Cls");
	}
	
	return 0;

}
