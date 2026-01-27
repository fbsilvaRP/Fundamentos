//Programa escrito em linguagem C
// O comando scanf armazena em um buffer o conteúdo digitado pelo usuário e armazena também a tecla enter utilizada pelo usuário para encerrar a entrada de dados
//Para que o buffer seja esvaziado depois da atribuição do conteúdo à variável, utiliza-se %*c.
#include <stdio.h>
int main()
{
	int n1, n2, n3, n4, soma; 
	
	printf("Digite o primeiro numero: ");
	scanf("%d%*c", &n1); 
	
	printf("Digite o segundo numero: ");
	scanf("%d%*c", &n2); 
	
	printf("Digite o terceiro numero: "); 
	scanf("%d%*c", &n3); 
	
	printf("Por fim, digite o terceiro numero: ");
	scanf("%d%*c", &n4); 
	
	soma = n1 + n2 + n3 + n4; 
	printf("%d + %d + %d + %d = %d", n1, n2, n3, n4, soma);
	
	return 0;
	

}

