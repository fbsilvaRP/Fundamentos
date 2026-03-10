#include <stdio.h>

#define grat 0.05; //	5/100 = 5% de gratificacao
#define imp 0.07;  //	7/100 = 7% de gratificacao 

int main()
{
	float salBase = 0.00; 
	float salNovo = 0.00;
	float bonus = 0.00;  
	float imposto = 0.00; 
	
	printf("Digite seu salario atual: "); 
	scanf("%f%*c", &salBase); 
	
	printf("\nSeu salario atual eh: R$%6.2f", salBase);
	
	bonus = salBase * grat; 
	imposto = salBase * imp; 
	
	salNovo = salBase + bonus - imposto; 
	
	printf("\nSeu novo salario eh: R$%6.2f", salNovo); 
	
	return 0; 
}