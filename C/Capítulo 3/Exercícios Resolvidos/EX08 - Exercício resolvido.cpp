#include <stdio.h>
int main()
{
	float deposito = 0.0; 
	float taxaJuros = 0.0; 
	float rendimentos = 0.0; 
	float valorTotal = 0.0;
	
	printf("Digite o valor de deposito: "); 
	scanf("%f%*c", &deposito); 
	
	printf("Digite o valor da taxa percentual de juros (sem o simbolo de porcentagem): ");
	scanf("%f%*c", &taxaJuros);
	
	rendimentos = deposito * (taxaJuros / 100); 
	
	valorTotal = rendimentos + deposito; 
	
	printf("\n Rendimentos: $%.2f", rendimentos);
	printf("\n Valor total: $%.2f", valorTotal); 
	
	return 0; 
	
}