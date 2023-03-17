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
	
/*
07) Dados um capital, uma taxa de juros mensal e um período em meses, informe o montante ao
final de cada mês. O programa deve funcionar como a seguir:
Capital? 100.00
Juros? 10
Período? 3
1º mês R$ 110,00
2º mês R$ 121,00
3º mês R$ 133,10*/

	
	float  j, c;
	int p, i, perg;
	
	//p= mes
	//j= juros
	//c= capital
	//cc= capital flutuante
	printf("Voçê prefere qual tipo:\n1-Juros em %c\n2-Juros em R$\nDigite(1 ou 2):", 37);
	scanf("%d", &perg);

	switch (perg) {
		case 1:
		
			printf("Quanto é o Seu Capital Inicial: ");
			scanf("%f", &c);
		
			printf("Quanto é o Juros em %c: ", 37);
			scanf("%f", &j);
			
			printf("Quantos Mêses irá ficar: ");
			scanf("%d", &p);
			
				
			system("Cls");
			printf("\n\nCapital Inicial: %.2f R$", c);
			printf("\nJuros: %.0f%c", j, 37);
			for(i=1;i<=p;i++){
				c = c+(c*(j/100));
				printf("\n%d° Mês: %.2f R$", i, c);
				Sleep(250);
					
			}
		
			break;
		case 2:
			
			printf("Quanto é o Seu Capital Inicial: ");
			scanf("%f", &c);
		
			printf("Quanto é o Juros em R$: ");
			scanf("%f", &j);
			
			printf("Quantos Mêses irá ficar: ");
			scanf("%d", &p);
			
				
			system("Cls");
			printf("\n\nCapital Inicial: %.2f R$", c);
			printf("\nJuros: %.0fR$", j);
			for(i=1;i<=p;i++){
				c = c+j;
				printf("\n%d° Mês: %.2f R$", i, c);
				Sleep(250);
					
			}	
			
			break;
		default:
			printf("Nenhuma opção correta foi escolhida");
			break;
	}
	

	return 0;
	
}
