#include <stdio.h>
int main()
{
	float n1, n2, maior; 
	
	printf("Primeiro numero: ");
	scanf("%f%*c", &n1);
	
	printf("Segundo numero: "); 
	scanf("%f%*c", &n2); 
	
	if(n1 > n2)
		maior = n1; 
	else
		if(n1 == n2)
			printf("Os dois numeros sao iguais.");
		else
			maior = n2; 
			
	printf("\nMaior: %.2f", maior);
	
	return 0;
}