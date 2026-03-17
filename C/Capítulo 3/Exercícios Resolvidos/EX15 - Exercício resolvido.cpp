#include <stdio.h>
int main()
{
	float preco = 0.0; 
	float percLucro = 0.0; 
	float percImp = 0.0; 
	float lucro = 0.0; 
	float impostos = 0.0; 
	float precoFinal = 0.0; 
	
	printf("Digite o preco de fabrica: "); 
	scanf("%f%*c", &preco); 
	
	printf("Digite o percentual de lucro do distribuidor: ");
	scanf("%f%*c", &percLucro); 
	
	printf("Digite o percentual de impostos: "); 
	scanf("%f%*c", &percImp);
	
	lucro = preco * (percLucro / 100); 
	
	impostos = preco * (percImp / 100);
	
	precoFinal = preco + lucro + impostos; 
	
	printf("\n a)Valor correspondente ao lucro do distribuidor: R$%.f", lucro);
	printf("\n b)Valor correspondente aos impostos: %.2f", impostos); 
	printf("\n c)Valor final do veiculo: R$%.2f", precoFinal); 
	
	return 0; 

}