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

//010) Elabore um programa que receba um n�mero do usu�rio e mostre a sua soma at� o usu�rio digitar o 0 para parar.
	
	

	return 0;	

}
