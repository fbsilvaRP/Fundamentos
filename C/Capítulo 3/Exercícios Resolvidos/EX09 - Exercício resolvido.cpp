#include <stdio.h>
int main()
{
	float base = 0.0; 
	float altura = 0.0;
	float area = 0.0;  
	
	printf("Digite o tam. da base do triangulo: ");
	scanf("%f%*c", &base); 
	
	printf("Digite o tam. da altura do triangulo: "); 
	scanf("%f%*c", &altura);
	
	area = (base * altura) / 2; 
	
	printf("Area: %.2f unidade ao quadrado", area); 
	
	return 0; 
}