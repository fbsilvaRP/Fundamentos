//OBS: Refazer o programa usando vetores...
#include <stdio.h>
int main()
{
	int I; 		
	float A, B, C;  

	printf("Digite o valor de A: ");
	scanf("%f%*c", &A); 

	printf("Digite o valor de B: "); 
	scanf("%f%*c", &B); 

	printf("Digite o valor de C: "); 
	scanf("%f%*c", &C);

	printf("Digite a opcao desejada: \n");
	printf("1.Valores digitados em ordem crescente \n"); 
	printf("2.Valores digitados em ordem decrescente \n"); 
	printf("3.O maior fica entre os dois outros numeros \n"); 
	scanf("%d%*c", &I); 

	switch(I)
	{
		case 1:
			if((A >  B) && (A > C))
			{
				if((B > C) || (B == C))
					printf("%.2f, %.2f, %.2f", C, B, A);
				else
					printf(".2%f, %.2f, %.2f", B, C, A);
			}
			if((B > A) && (B > C))
			{
				if((A > C) || (A == C))
					printf("%.2f, %.2f, %.2f", C, A, B);
				else
					printf("%.2f, %.2f, %.2f", A, C, B);
			}
			if((C > A) && (C > B))
			{
				if((A > B) || (A == B))
					printf("%.2f, %.2f, %.2f", B, A, C); 
				else
					printf("%.2f, %.2f, %.2f", A, B, C); 
			}
			
			break;
			
		case 2:
			if((A > B) && (A > C))
			{
				if((B > C) || (B == C))
					printf("%.2f, %.2f, %.2f", A, B, C); 
				else
					printf("%.2f, %.2f, %.2f", A, C, B);
			}
			if((B > A) && (B > C))
			{
				if((A > C) || (A == C))
					printf("%.2f, %.2f, %.2f", B, A, C); 
				else
					printf("%.2f, %.2f, %.2f", B, C, A);
			}
			if((C > A) && (C > B))
			{
				if((A > B) || (A == B))
					printf("%.2f, %.2f, %.2f", C, A, B);
				else
					printf("%.2f, %.2f, %.2f", C, B, A); 
			}
			
			break;
			
		case 3:
			if((A > B) && (A > C))
				printf("%.2f, %.2f, %.2f", B, A, C);
				 
			if((B > A) && (B > C))
				printf("%.2f, %.2f, %.2f", A, B, C);
				 
			if((C > A) && (C > B))
				printf("%.2f, %.2f, %.2f", A, C, B);
				
			break;
	}

	return 0; 
}