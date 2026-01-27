#include <stdio.h>
int main()
{
	float n1, n2, n3, media; 
	
	printf("Digite a primeira nota: "); 
	scanf("%f%*c", &n1); 
	
	printf("Digite a segunda nota: "); 
	scanf("%f%*c", &n2); 
	
	printf("Digite a terceira nota: "); 
	scanf("%f%*c", &n3); 
	
	media = (n1 + n2 + n3) / 3; 
	
	printf("Media: %5.2f", media); 
	/*No comando anterior, %f especifica que será mostrado um número real, e 5.2 significa que serão utilizados:
	5 caracteres para mostrar o número e, destes, 2 caracteres para a parte fracionária, um caractere para o ponto
	e dois caracteres para a parte inteira. 

	*/
}
