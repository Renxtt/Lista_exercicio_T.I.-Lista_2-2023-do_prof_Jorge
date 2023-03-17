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

//009) Receber um nome e imprimí-lo dez vezes na tela.
	
	char name[40];
	int i;
	
	printf("Digigi um Nome: ");
	scanf("%s", &name);
	
	printf("\n");
	for(int i=0;i<=10;i++){
		printf("\n%s", name);
	}
	
	
	return 0;
}
