#include <stdio.h>

// Prot�tipos
void dobrar(int x);
void dobrarPonteiro(int *pX);
	
int main(){	 
	// Cria as fun��es
    int a = 7;
    int b = 5;
    int *c =  &b;
    
    // Como est� passando uma vari�vel, ele faz uma c�pia do valor
    dobrar(a);
    dobrar(b);
    
    // Passa o ponteiro C, que aponta para o endere�o da vari�vel B
	// se for alterado o valor, o B sofrer� as mesmas altera��es...
    dobrarPonteiro(c);
    
    // Imprime os novos valores
    printf("A: %i \n", a);
    printf("B: %i \n", b);
    printf("C: %i \n", *c);
	return 0;
}

// Ele recebe uma c�pia do valor X
// Se n�o retornar o novo valor e ser atribu�do a uma vari�vel
// O dobro do valor ser� "perdido" n�o afetar� nada, fora dessa fun��o
void dobrar(int x) {
	x = x * 2;
}

// Ele recebe um ponteiro (endere�o)
// E quando altera, altera de fato, ent�o no main ir� surtir efeito
void dobrarPonteiro(int *pX) {
	*pX = *pX * 2;
}
