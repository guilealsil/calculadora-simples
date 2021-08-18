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
	printf(" Lista de Operações:\n\n\t[1 = SOMA]\n\t[2 = SUBTRAÇÃO]\n\t[3 = MULTIPLICAÇÃO]\n\t[4 = DIVISÃO]\n\n");
	
	do{
		printf(" Operação: ");
		scanf("%i", &op);
		printf(" Digite o primeiro número: ");
		scanf("%f", &x);
		printf(" Digite o segundo número: ");
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
					printf("\t\t\n\nOPÇÃO INVÁLIDA!");}
					
		printf("\n\tDeseja continuar? [1 = SIM] ou [2 = NÃO]: ");
		scanf("%i", &repeat);
	}while (repeat == 1);
	
	printf("\n\t\t~ FIM DA OPERAÇÃO ~");
	printf("\n\t~ Obrigado por utilizar este programa! ~\n\n");
	
	system("pause");
	return 0;
}
