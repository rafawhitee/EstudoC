#include <stdio.h>

int main(){
	
	// a fun��o GETS l� do teclado at� encontrar uma nova linha (Enter) ou o fim do arquivo (EOF)
	// e o null '\0' � inserido no fim da linha automaticamente
	// ela n�o � confi�vel pois pode causar BUFFER OVERFLOW (o m�todo pd ler caracteres al�m do tamanho da string passada como par�metro)	
	// J� a fun��o PUTS, ela imprime a string, por�m sempre insere uma nova linha no final '\n'
	puts("----  Testando PUTS and GETS ----");
	char nome[128];
	puts("Digite o seu nome: ");
	gets(nome); // inseguro
	printf("Seu nome e: %s \n \n", nome);
	
	// A fun��o FGETS, l� uma linha do fluxo especificiado e a armazena na string apontada.
	// realiza o procedimento at� n-1 (tamanho - 1)	
	puts("---- Testando FGETS ----");
	char string[50];
	printf("Nome: ");
	
	// avisa que ir� ler at� 50 caracteres, guardar� na vari�vel string
	// e o terceiro par�metro � o padr�o para leitura via console (STDIN)
	fgets(string, 50, stdin);
	printf("Seu nome e: %s \n \n", string);
	
	return 0;
}
