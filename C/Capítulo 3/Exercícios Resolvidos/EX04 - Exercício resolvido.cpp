#include <stdio.h>
int main()
{
	float salario, novoSalario;
	
	printf("Digite seu salario: ");
	scanf("%f%*c", &salario); 
	
	novoSalario = salario * 1.25;
	
	printf("Novo salario: %.2f", novoSalario);
	//no comando acima, basta utilizar .2 para que o nmero apresente duas casas decimais
	
	return 0;
}