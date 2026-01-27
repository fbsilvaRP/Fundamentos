#include <stdio.h>
int main()
{
	float salario, percentual, aumento, novoSalario;
	
	printf("Digite seu salario atual: ");
	scanf("%f%*c", &salario); 
	
	printf("Digite o percentual de aumento: "); 
	scanf("%f%*c", &percentual); 
	
	aumento = (salario * percentual) / 100; 
	
	novoSalario = salario + aumento; 
	
	printf("Novo salario: %.2f", novoSalario);
	printf("\nAumento: %.2f", aumento);
	//o comando \n serve para pular uma linha
	
	return 0;
}