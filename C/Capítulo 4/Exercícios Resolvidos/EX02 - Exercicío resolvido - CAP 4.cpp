#include <stdio.h>
int main()
{
	float nota1, nota2, nota3, notaExame, media; 
	
	printf("Nota 1: ");
	scanf("%f%*c", &nota1); 
	
	printf("Nota 2: ");
	scanf("%f%*c", &nota2);
	
	printf("Nota 3: ");
	scanf("%f%*c", &nota3);
	
	media = (nota1 + nota2 + nota3) / 3.00;
	
	printf("Media aritmetica: %.2f \n", media); 
	
	if(media >= 0.0 && media < 3.00)
		printf("Reprovado");
		
	if(media >= 3.00 && media < 7.00)
	{
		printf("Exame");
		notaExame = 12 - media;
		printf("\nDeve tirar a nota: %.2f", notaExame);
	}
		
	if(media >= 7.00 && media <= 10.00)
		printf("Aprovado");
		
	return 0; 
	
	
}