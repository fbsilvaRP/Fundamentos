#include <stdio.h>
int main()
{
	float medidaPes = 0.0;
	float medidaPol = 0.0; 
	float medidaJarda = 0.0; 
	float medidaMilhas = 0.0;  
	
	printf("Medida em pes: "); 
	scanf("%f%*c", &medidaPes); 
	
	medidaPol = medidaPes * 12; //1 pe = 12 pol 
	
	medidaJarda = medidaPes / 3; //1 jarda = 3 pes
	
	medidaMilhas = medidaJarda / 1760; // 1 milha = 1760 jardas
	
	printf("\n a)Polegadas: %.2f", medidaPol);
	printf("\n b)Jardas: %.2f", medidaJarda);
	printf("\n c)Milhas: %.2f", medidaMilhas); 
	
	return 0; 
}