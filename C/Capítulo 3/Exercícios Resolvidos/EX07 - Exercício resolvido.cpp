#include <stdio.h>

#define grat 50 		//Gratificação de 50 reais
#define imposto 0.1 	//Imposto de 10% 

int main()
{
	float salBase = 0.00;
	float calcImposto = 0.00;
	float salFinal = 0.00;   
	
	printf("Digite seu salario: ");
	scanf("%f%*c", &salBase); 
	
	calcImposto = salBase * imposto;
	
	salFinal = salBase - calcImposto + grat; 
	
	printf("Seu salario final eh: $%5.2f", salFinal);
	
	return 0; 
}