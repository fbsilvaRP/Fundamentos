#OBS: Erro de comparação de datas - verificar 
#include <stdio.h>
int main()
{
	int dia1 = 0, mes1 = 0, ano1 = 0; 
	int dia2 = 0, mes2 = 0, ano2 = 0; 
	
	printf("Coletando a primeira data...");
	
	printf("\nDigite o dia: ");
	scanf("%d%*c", &dia1);
	
	printf("Digite o mes (ex: 1, 2, ...): ");
	scanf("%d%*c", &mes1);
	
	printf("Digite o ano: "); 
	scanf("%d%*c", &ano1); 
	
	printf("\nData inicial coletada: %d/%d/%d", dia1, mes1, ano1);
	
	printf("\nColetando a segunda data..."); 
	
	printf("\nDigite o dia: "); 
	scanf("%d%*c", &dia2);
	
	printf("Digite o mes: "); 
	scanf("%d%*c", &mes2); 
	
	printf("Digite o ano: ");
	scanf("%d%*c", &ano2); 
	
	printf("\nSegunda data coletada: %d/%d/%d", dia2, mes2, ano2); 
	
	//Definindo a data cronologicamente maior
	
	if (ano1 > ano2)
		printf("\nA primeira data eh maior");
	else 
	{
		if(ano1 < ano2)
			printf("\nA segunda data eh maior");
		else
		{
			if(mes1 > mes2)
				printf("\nA primeira data eh maior");
			else
			{
				if(mes1 < mes2)
					printf("\nA segunda data eh maior");
				else
				{
					if(dia1 > dia2)
						printf("\nA primeira data eh maior");
					else
					{
						if(dia1 < dia2)
							printf("\nA primeira data eh maior");
						else
							printf("\nAs duas datas sao iguais...");
					}
				}
			}
			
		}
		
	}
}
	