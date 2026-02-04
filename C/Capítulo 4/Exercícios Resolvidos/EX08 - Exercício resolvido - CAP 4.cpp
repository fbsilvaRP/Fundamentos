#include <stdio.h>
#include <math.h>
int main()
{
	int I;
	float A, B; 
	
	printf("Menu de opcoes: \n");
	printf("1. Somar dois numeros \n");
	printf("2. Raiz quadrada de um numero \n");
	
	printf("Digite a opcao desejada: ");
	scanf("%d%*c", &I);
	
	switch(I)
	{
		case 1:
			printf("Digite o primeiro numero: ");
			scanf("%f%*c", &A); 
			
			printf("Digite o segundo numero: ");
			scanf("%f%*c", &B); 
			
			printf("%.2f + %.2f = %.2f", A, B, A+B); 
			
			break; 
		
		case 2:
			printf("Digite o numero desejado: ");
			scanf("%f%*c", &A); 
			
			printf("Raiz quadrada de %.2f = %.2f", A, sqrt(A)); 
			
			break; 
	}
	
	return 0; 
}