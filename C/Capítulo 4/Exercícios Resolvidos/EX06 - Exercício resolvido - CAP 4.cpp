#include <stdio.h>
int main()
{
	int n1; 
	
	printf("Digite um numero: ");
	scanf("%d%*c", &n1);
	
	if(n1 % 2 == 0)
		printf("%d eh par.", n1);
	else
		printf("%d nao eh par.", n1);
		
	return 0;
}