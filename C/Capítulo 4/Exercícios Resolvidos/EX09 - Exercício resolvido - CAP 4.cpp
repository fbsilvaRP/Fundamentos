#include <stdio.h>
#include <time.h>

int main()
{
	//Variavel do tipo time_t (biblioteca) p/ armazenar o  tempo "bruto"
	time_t tempo; 
	
	//Estrutura para armazenar o tempo dividido (dia, mes, ano) 
	struct tm *info_tempo; 
	
	//buffer de texto para guardar a data formatada 
	//tamamho 11: 2 (DD) + 2 (/) + 2 (MM) + 4 (AAAA) + 1 (caractere nulo \0)
	char buffer[11]; 
	
	//Obtem a hora atual do sistema
	time(&tempo);
	
	//Converte o tempo bruto para o fuso horario local
	info_tempo = localtime(&tempo); 
	
	if(info_tempo == NULL)
	{
		perror("Erro ao obter a hora local");
		return 1; 
	}
	
	//Exibe o tempo do sistema sem formatacao (exemplo)
	printf(ctime(&tempo)); 
	
	//Formata a hora:
	//%d = Dia do mes
	//%m = Mes 
	//%Y = Ano 
	strftime(buffer, sizeof(buffer), "%d/%m/%Y", info_tempo);
	
	//Exibe o resultado
	printf("%s\n", buffer); 
	
	int mes_Atual = info_tempo->tm_mon + 1; 
	
	switch(mes_Atual)
	{
		case 1: 
			printf("Janeiro");
			break;
			
		case 2:
			printf("Fevereiro");
			break;
			
		case 3:
			printf("Marco");
			break; 
			
		case 4:
			printf("Abril");
			break;
			
		case 5:
			printf("Maio");
			break; 
		
		case 6:
			printf("Junho");
			break;
			
		case 7: 
			printf("Julho");
			break; 
		
		case 8:
			printf("Agosto");
			break; 
			
		case 9:
			printf("Setembro");
			break;
			
		case 10:
			printf("Outubro");
			break;
			
		case 11:
			printf("Novembro");
			break;
			
		case 12:
			printf("Dezembro"); 
			break;
			
		break;
			
	}
	
	
	
	return 0; 
}