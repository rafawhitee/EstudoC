#include <stdio.h>

// Protótipos
void dobrar(int x);
void dobrarPonteiro(int *pX);
	
int main(){	 
	// Cria as funções
    int a = 7;
    int b = 5;
    int *c =  &b;
    
    // Como está passando uma variável, ele faz uma cópia do valor
    dobrar(a);
    dobrar(b);
    
    // Passa o ponteiro C, que aponta para o endereço da variável B
	// se for alterado o valor, o B sofrerá as mesmas alterações...
    dobrarPonteiro(c);
    
    // Imprime os novos valores
    printf("A: %i \n", a);
    printf("B: %i \n", b);
    printf("C: %i \n", *c);
	return 0;
}

// Ele recebe uma cópia do valor X
// Se não retornar o novo valor e ser atribuído a uma variável
// O dobro do valor será "perdido" não afetará nada, fora dessa função
void dobrar(int x) {
	x = x * 2;
}

// Ele recebe um ponteiro (endereço)
// E quando altera, altera de fato, então no main irá surtir efeito
void dobrarPonteiro(int *pX) {
	*pX = *pX * 2;
}
