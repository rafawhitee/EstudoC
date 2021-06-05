#include <stdio.h>

// Declara��o da Estrutura
struct horario {
	int *pHora;
	int *pMinuto;
	int *pSegundo;
};
	
int main(){
	// Criou uma estrutura
	struct horario hoje;
	
	// Criou 3 vari�veis inteiras
	int hora = 21;
	int minuto = 31;
	int segundo = 49;
	
	// Alterou os valores das estruturas, que s�o ponteiros
	// Logo, ele precisa receber um endere�o de mem�ria
	// &nome_da_variavel --> o endere�o de mem�ria onde se encontra a vari�vel
	hoje.pHora = &hora;
	hoje.pMinuto = &minuto;
	hoje.pSegundo = &segundo;
	
	// Imprime a hora...
	// lembrando que pHora, pMinuto e pSegundo s�o ponteiros
	// Se colocar sem o * no come�o, ele mostrar� o endere�o de mem�ria
	// Para mostrar o valor onde o ponteiro aponta, precisa p�r o *
	printf("%i:%i:%i \n", *hoje.pHora, *hoje.pMinuto, *hoje.pSegundo);
	
	return 0;
}
