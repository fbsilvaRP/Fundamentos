//OBS: Erro de comparação de datas - verificar 
#include <stdio.h>
int main()
{
	//Definicao de variaveis -----------------------------------------------------------------------
	int dia1 = 0, mes1 = 0, ano1 = 0;  //Armazenam, respectivamente, o primeiro dia, mes e ano
	int dia2 = 0, mes2 = 0, ano2 = 0; // // 						   segundo dia, mes e ano
	int verificador = 0; 			
	// ---------------------------------------------------------------------------------------------
	//Obtendo as datas do usuário...
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
	// --------------------------------------------------------------------------------------------- 
	//Definindo a data cronologicamente maior - como definir?
	//lógica utilizada: 
		// * Verificador 0 significa que a data 1 eh maior
		// * Verificador 1 significa que a data 2 eh maior 

	//Começa verificando qual dos anos é maior
	if(ano1 > ano2)
		verificador = 0;
	else
	{
		if(ano2 > ano1)
			verificador = 1;
		
		//Se os anos forem iguais, o criterio de comparacao utilizado sera o mes
		if(ano1 == ano2)
		{
			if(mes1 > mes2)
				verificador = 0;
				
			else
			{
				if(mes2 > mes1)
					verificador = 1;
				
				//Se os meses forem iguais, o criterio de comparacao utilizado sera o dia
				if(mes1 == mes2)
				{
					if(dia1 > dia2)
						verificador = 0;
					
					if(dia2 > dia1)
						verificador = 1;
					
					else
						printf("\nAs duas datas sao iguais.");	
						return 0; //Encerra o programa sem passar pela verificação, caso as duas datas sejam iguais
				}
			}
		}
	}
	//Verificador == 0: A primeira data será maior
	if(verificador == 0)
		printf("\nA primeira data digitada eh maior");
	else
		printf("\nA segunda data eh maior");
	
	return 0; 
}
	