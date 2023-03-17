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
	
	
//012) Crie um programa que mostre o fatorial de um número recebido.

	int nub_inicial, fatoracao_do_seu_nub;
	
	printf("Digite um Número: ");
	scanf("%d", &nub_inicial);
	
	for(fatoracao_do_seu_nub=1 ; nub_inicial>1 ; nub_inicial = nub_inicial - 1){
		fatoracao_do_seu_nub = fatoracao_do_seu_nub*nub_inicial;
		printf("\nFatorial de %d é: %d", nub_inicial, fatoracao_do_seu_nub);
	}
	
	return  0;
}
