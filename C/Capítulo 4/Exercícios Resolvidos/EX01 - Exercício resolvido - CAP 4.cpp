#include <stdio.h>

//OBS: ao declarar constantes, não é necessário inserir um ; ao fim da linha

#define pesoLab 2
#define pesoSemestral 3
#define pesoExameFinal 5

int main()
{
	
	float notaLab, notaSemestral, notaExameFinal, media;
	char conceito; 
	
	printf("Digite sua nota obtida no Trabalho de Laboratorio: ");
	scanf("%f%*c", &notaLab); 
	
	printf("Digite sua nota obtida na Avaliacao Semestral: "); 
	scanf("%f%*c", &notaSemestral); 
	
	printf("Digite sua nota obtida no Exame Final: "); 
	scanf("%f%*c", &notaExameFinal);
	
	media = (notaLab * pesoLab + notaSemestral * pesoSemestral + notaExameFinal * pesoExameFinal) / (pesoLab + pesoSemestral + pesoExameFinal);
	
	
	//OBS: Ao inserir o caractere na variável, deve-se utilizar aspas simples ''
	
	if(media >= 0.00 && media < 5.00)
		conceito = 'E';
		
	if(media >= 5.00 && media < 6.00)
		conceito = 'D';
		
	if(media >= 6.00 && media < 7.00)
		conceito = 'C';
		
	if(media >= 7.00 && media < 8.00)
		conceito = 'B';
		
	if(media >= 8.00 && media <= 10.00)
		conceito = 'A';
		
	//Apresentação das informações
	printf("Media ponderada: %.2f", media);
	printf("\nConceito: %c", conceito);
	
	return 0;
	
}