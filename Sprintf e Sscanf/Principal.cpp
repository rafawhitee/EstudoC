#include <stdio.h>

int main(){
	int valor = 201;
	char caractere = 'a';
	float valorDecimal = 19.12;	
	char saida1[20];
	
	// Ele joga a string (segundo par�metro) para o vetor (primeiro par�metro)
	// E os par�metors depois s�o as vari�veis, caso tenha
	// Ent�o basicamente, ele armazena no vetor
	sprintf(saida1, "%d %c %f", valor, caractere, valorDecimal);
	printf("\n %s \n", saida1);
	
	// o SSCANF l� uma string e pode jogar para diversas vari�veis
	// no caso abaixo, foi criado um vetor de char (string), como v�rios n�meros 
	// os 3 primeiros inteiros e o �ltimo decimal
	// depois foi utilizado o sscanf para pegar essa string ler os 4 n�meros e jogar nas vari�veis A, B, C e D
	char saida2[20] = "10 50 1002 910.13";
	int a, b, c;
	float d;
	sscanf(saida2, "%d %d %d %f", &a, &b, &c, &d);
	printf("\n A: %d \n", a);
	printf("\n B: %d \n", b);
	printf("\n C: %d \n", c);
	printf("\n D: %f \n", d);
	
	return 0;	
}
