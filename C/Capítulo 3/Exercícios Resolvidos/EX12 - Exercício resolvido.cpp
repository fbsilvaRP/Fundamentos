#include <stdio.h>
int main()
{
	float num1 = 0.0; 
	float num2 = 0.0; 
	float pot = 0.0;  
	
	printf("Digite um numero maior que zero: ");
	scanf("%f%*c", &num1); 
	
	printf("Digite outro numero maior que zero: ");
	scanf("%f%*c", &num2);  
	
	pot = num1; 
	
	//Estrutura usando o for (sem usar a funcao definida)
	
	for(int i = 1; i < num2; i++)
		pot = pot * num1;
		
	printf("\n%.2f ^ %.2f = %.2f", num1, num2, pot); 
	
	return 0; 
}