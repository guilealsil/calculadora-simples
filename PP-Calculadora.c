#include<stdio.h>
#include<stdlib.h> 
#include<locale.h>
#include<time.h>
#include<conio.h> 
#include<ctype.h>

int main(void) 
{
	setlocale(LC_ALL,"Portuguese");
	int op, repeat;
	float x, y, conta;
	
	
	printf(" ========= CALCULADORA SIMPLES =========\n\n");
	printf(" Lista de Opera��es:\n\n\t[1 = SOMA]\n\t[2 = SUBTRA��O]\n\t[3 = MULTIPLICA��O]\n\t[4 = DIVIS�O]\n\n");
	
	do{
		printf(" Opera��o: ");
		scanf("%i", &op);
		printf(" Digite o primeiro n�mero: ");
		scanf("%f", &x);
		printf(" Digite o segundo n�mero: ");
		scanf("%f", &y);
		printf("\n");
			switch (op){
				case 1:
					conta = x + y;
					printf(" %.0f + %.0f = %.0f\n", x, y, conta);
					break;
				case 2:
					conta = x - y;
					printf(" %.0f - %.0f = %.0f\n", x, y, conta);
					break;
				case 3:
					conta = x * y;
					printf(" %.0f * %.0f = %.0f\n", x, y, conta);
					break;
				case 4:
					conta = x / y;
					printf(" %.0f / %.0f = %.2f\n", x, y, conta);
					break;
				default:
					system("cls");
					printf("\t\t\n\nOP��O INV�LIDA!");}
					
		printf("\n\tDeseja continuar? [1 = SIM] ou [2 = N�O]: ");
		scanf("%i", &repeat);
	}while (repeat == 1);
	
	printf("\n\t\t~ FIM DA OPERA��O ~");
	printf("\n\t~ Obrigado por utilizar este programa! ~\n\n");
	
	system("pause");
	return 0;
}
