#include <stdio.h>

int main(){
	int valor = 201;
	char caractere = 'a';
	float valorDecimal = 19.12;	
	char saida1[20];
	
	// Ele joga a string (segundo parâmetro) para o vetor (primeiro parâmetro)
	// E os parâmetors depois são as variáveis, caso tenha
	// Então basicamente, ele armazena no vetor
	sprintf(saida1, "%d %c %f", valor, caractere, valorDecimal);
	printf("\n %s \n", saida1);
	
	// o SSCANF lê uma string e pode jogar para diversas variáveis
	// no caso abaixo, foi criado um vetor de char (string), como vários números 
	// os 3 primeiros inteiros e o último decimal
	// depois foi utilizado o sscanf para pegar essa string ler os 4 números e jogar nas variáveis A, B, C e D
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
