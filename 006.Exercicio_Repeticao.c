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
	
	system("color 02");
	
//006) Dado um número natural (n) desenhe um quadrado n x n. (for aninhado).	
	int i, o, b, c;
	
	printf("\nAconse-lho a colocar um número acima de 10\n\n");
	printf("Digigi:");
	scanf("%d", &o);
	
	b = o-2;
	c = (o/2)-2;
	printf("\n\n\n\n");
	Sleep(50);
	system("Cls");
	
	printf("\n%d X %d\n", o, c);
	Sleep(50);
	for(i=1;i<=o;i++){
		printf("_");
		Sleep(50);
	}for(i=1;i<=c;i++){
		printf("\n|");
		Sleep(50);
		for(int i=1;i<=b;i++){
			printf(" ");
			Sleep(50);
		}
		printf("|");
		Sleep(50);
	}
	printf("\n");
	Sleep(50);
	for(i=1;i<=o;i++){
			printf("-");
			Sleep(50);
	}
	printf("\n\n\n");
	Sleep(50);
	printf("\nou\n");
	Sleep(50);
	c = o;
	/*
	meu quadrado será 
	-------
	|
	|
	|
	|
	-------
	*/
	printf("\n\n\n\n");
	printf("\n%d X %d\n", o, o);
	Sleep(50);
		for(i=1;i<=o;i++){
			printf("-");
			Sleep(50);
		}for(i=1;i<=c;i++){
			printf("\n|");
			Sleep(50);
			for(int i=1;i<=b;i++){
				printf(" ");
				Sleep(50);
			}
			printf("|");
			Sleep(50);	
		}	
	
		printf("\n");
		Sleep(50);
		for(i=1;i<=o;i++){
				printf("-");
				Sleep(50);
		}
		
		printf("\n\n\n");
		Sleep(50);
	
	
	return 0;

}
