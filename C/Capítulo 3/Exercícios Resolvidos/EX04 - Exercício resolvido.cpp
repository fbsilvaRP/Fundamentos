#include <stdio.h>
#define aumento 1.25;
//O comando acima define uma constante com valor fixo de 1.25
int main()
{
	float salario, novoSalario;
	
	printf("Digite seu salario: ");
	scanf("%f%*c", &salario); 
	
	novoSalario = salario * aumento;
	
	printf("Novo salario: %.2f", novoSalario);
	//no comando acima, basta utilizar .2 para que o nmero apresente duas casas decimais
	
	return 0;

}

