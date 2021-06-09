#include <stdio.h>

int main(){
	
	// a função GETS lê do teclado até encontrar uma nova linha (Enter) ou o fim do arquivo (EOF)
	// e o null '\0' é inserido no fim da linha automaticamente
	// ela não é confiável pois pode causar BUFFER OVERFLOW (o método pd ler caracteres além do tamanho da string passada como parâmetro)	
	// Já a função PUTS, ela imprime a string, porém sempre insere uma nova linha no final '\n'
	puts("----  Testando PUTS and GETS ----");
	char nome[128];
	puts("Digite o seu nome: ");
	gets(nome); // inseguro
	printf("Seu nome e: %s \n \n", nome);
	
	// A função FGETS, lê uma linha do fluxo especificiado e a armazena na string apontada.
	// realiza o procedimento até n-1 (tamanho - 1)	
	puts("---- Testando FGETS ----");
	char string[50];
	printf("Nome: ");
	
	// avisa que irá ler até 50 caracteres, guardará na variável string
	// e o terceiro parâmetro é o padrão para leitura via console (STDIN)
	fgets(string, 50, stdin);
	printf("Seu nome e: %s \n \n", string);
	
	return 0;
}
