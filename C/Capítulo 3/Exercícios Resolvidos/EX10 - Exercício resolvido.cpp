#include <stdio.h>

#define pi 3.14

int main()
{
	float raio = 0.0; 
	float area = 0.0; 
	
	printf("Digite o raio do circulo: "); 
	scanf("%f%*c", &raio); 
	
	area = pi * raio * raio;
	
	printf("Area: %.2f unidades de area", area);
	
	return 0;
}