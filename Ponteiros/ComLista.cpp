#include <stdio.h>

// Cria��o da Estrutura
struct list {
	int value;
	struct list *next;
};

// Prot�tipo
void readWithoutRecursion(struct list *first);
void readWithRecursion(struct list *first);

int main(){	 
    // Declara as vari�veis
	struct list m1, m2, m3;
	struct list *hook = &m1;
	
	// Muda os valores do m1, m2 e m3
	m1.value = 10;
	m2.value = 20;
	m3.value = 30;
	
	// m1 aponta para m2 e m2 para m3
	m1.next = &m2;
	m2.next = &m3;
	m3.next = 0; // NULL
	
	// Chama o m�todo para ler
	printf("Chamando readWithoutRecursion \n");
	readWithoutRecursion(hook);
	
	printf("Chamando readWithRecursion \n");
	readWithRecursion(hook);
	return 0;
}

void readWithoutRecursion(struct list *current) {
	while(true){
		printf("Valor Atual: %i \n", current->value);
		if(current->next){
			current = current->next;
		} else {
			break;
		}
	}
	printf("End of List \n");
}

// L� a lista, com recursividade
void readWithRecursion(struct list *first) {
	// Se o ponteiro n�o for nulo
	if(first){
		// Imprime o valor
		printf("Valor Atual: %i \n", first->value);
		// Se existir um pr�ximo
		if(first->next){
			// Chama o mesmo m�todo, passando o ponteiro do Next...
			readWithRecursion(first->next);
		} else {
			// Se for nulo, � porque � o �ltimo da lista...
			printf("End of List \n");
		}
	}
}


