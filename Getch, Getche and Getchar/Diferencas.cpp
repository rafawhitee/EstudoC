#include <stdio.h>
#include <conio.h>

int main(){
	char a, b, c;
	
	// Por padr�o n�o exibe o caractere na tela durante a execu��o
	printf("Digite o Caractere A: \n");
	a = getch();
	printf("\n --------------------- \n");
	printf("Getch: %c \n", a);
	
	// Igual a getch, mas ela exibe
	printf("Digite o Caractere B: \n");
	b = getche();
	printf("\n --------------------- \n");
	printf("Getche: %c \n", b);
	
	// Semelhante ao getche, mas temos que pressionar a tecla enter no final para armazenar
	printf("Digite o Caractere C: \n");
	c = getchar();
	printf("\n --------------------- \n");
	printf("Getchar: %c \n", c);
	
}
