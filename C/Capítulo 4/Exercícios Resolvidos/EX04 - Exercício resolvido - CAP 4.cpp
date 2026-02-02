#include <stdio.h>
int main()
{
	float n1, n2, n3;
	float menor, inter, maior;  
	
	printf("Primeiro numero: ");
	scanf("%f%*c", &n1);
	
	printf("\nSegundo numero: ");
	scanf("%f%*c", &n2); 
	
	printf("\nTerceiro numero: "); 
	scanf("%f%*c", &n3); 
	
	if((n1 > n2) && (n1 > n3)){
		maior = n1; 
		if((n2 > n3) || (n2 == n3)){
			inter = n2; 
			menor = n3; 
		}
		else {
			inter = n3; 
			menor = n2;
		}
	}
	if((n2 > n1) && (n2 > n3)){
		maior = n2; 
		if((n1 > n3) || (n1 == n3)){
			inter = n1; 
			menor = n3; 
		}
		else {
			inter = n3;
			menor = n1; 
		}
	}
	if((n3 > n1) && (n3 > n2)){
		maior = n3; 
		if((n1 > n2) || (n1 == n2)){
			inter = n1; 
			menor = n2; 
		}
		else {
			inter = n2; 
			menor = n1;
		}
	}
	if((n1 == n2) || (n2 == n3)){
		maior = n1;
		inter = n1; 
		menor = n1;
	}
	
	printf("%.2f, %.2f, %.2f", menor, inter, maior);
	return 0; 
	
	}
	