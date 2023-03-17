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

//010) Elabore um programa que receba um número do usuário e mostre a sua soma até o usuário digitar o 0 para parar.
	
	
    int numero, soma = 0;

    do {
        printf("Digite um numero (ou 0 para parar): ");
        scanf("%d", &numero);
        soma += numero;
        printf("Soma atual: %d\n", soma);
    } while (numero != 0);

    return 0;
}
