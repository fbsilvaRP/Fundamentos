#include <stdio.h>
int main()
{
	int valor1, valor2, valor3, valor;
	
	printf("Primeiro numero (menor): ");
	scanf("%d%*c", &valor1); 
	
	printf("Segundo numero (maior que o anterior): ");
	scanf("%d%*c", &valor2); 
	
	printf("Terceiro numero (maior que o anterior): ");
	scanf("%d%*c", &valor3);
	
	//Os tres primeiros valores se encontram em ordem crescente (regra do exercicio)
	
	printf("Quarto numero: ");
	scanf("%d%*c", &valor);
	
	//O valor digitado é maior do que o maior número inserido?
	if(valor > valor3)
		printf("%d, %d, %d, %d", valor, valor3, valor2, valor1);
		
	//O valor digitado é maior do que o segundo valor e menor do que o terceiro?
	if((valor > valor2) && (valor < valor3) )
		printf("%d, %d, %d, %d", valor3, valor, valor2, valor1); 
		
	//O valor digitado é maior do que o primeiro valor e menor do que o segundo? 
	if((valor < valor2) && (valor > valor1))
		printf("%d, %d, %d, %d", valor3, valor2, valor, valor1);
		
	//O valor digitado é menor do que o menor número inserido?
	if(valor < valor1)
		printf("%d, %d, %d, %d", valor3, valor2, valor1, valor);
	
	return 0;
	
}