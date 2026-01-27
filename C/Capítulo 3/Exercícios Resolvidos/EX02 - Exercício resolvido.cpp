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
	
	printf("Media: %4.2f", media); 
}