//OBS: A funcao cbrt() extrai a raiz cubica do argumento. Presente em math.h
//OBS: a funcao sqrt() extrai a raiz quadrada do argumento. Presente em math.h

#include <stdio.h>
#include <math.h>
int main()
{
	float num = 0; 
	
	printf("Digite um numero: "); 
	scanf("%f%*c", &num); 
	
	printf("\n num. ao quadrado: %.2f", num * num); 
	printf("\n num. ao cubo: %.2f", num * num * num); 
	printf("\n raiz quadrada: %.2f", sqrt(num)); 
	printf("\n raiz cubica: %.2f", cbrt(num)); 
	
	return 0; 
}