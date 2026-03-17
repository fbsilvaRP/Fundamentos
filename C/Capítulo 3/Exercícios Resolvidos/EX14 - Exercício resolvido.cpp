#include <stdio.h>
int main()
{
	int anoNasc = 0; 
	int anoAtual = 0; 
	int idade = 0; 
	int idadeFuturo = 0; 
	
	printf("Ano de nascimento: ");
	scanf("%d%*c", &anoNasc); 
	
	printf("Ano atual: ");
	scanf("%d%*c", &anoAtual); 
	
	idade = anoAtual - anoNasc; 
	
	idadeFuturo = 2050 - anoNasc; 
	
	printf("\n a)Idade: %d", idade);
	printf("\n b)Idade em 2050: %d", idadeFuturo);
	
	return 0; 
}