#include <stdio.h>

// Declaração da Estrutura
struct horario {
	int *pHora;
	int *pMinuto;
	int *pSegundo;
};
	
int main(){
	// Criou uma estrutura
	struct horario hoje;
	
	// Criou 3 variáveis inteiras
	int hora = 21;
	int minuto = 31;
	int segundo = 49;
	
	// Alterou os valores das estruturas, que são ponteiros
	// Logo, ele precisa receber um endereço de memória
	// &nome_da_variavel --> o endereço de memória onde se encontra a variável
	hoje.pHora = &hora;
	hoje.pMinuto = &minuto;
	hoje.pSegundo = &segundo;
	
	// Imprime a hora...
	// lembrando que pHora, pMinuto e pSegundo são ponteiros
	// Se colocar sem o * no começo, ele mostrará o endereço de memória
	// Para mostrar o valor onde o ponteiro aponta, precisa pôr o *
	printf("%i:%i:%i \n", *hoje.pHora, *hoje.pMinuto, *hoje.pSegundo);
	
	return 0;
}
