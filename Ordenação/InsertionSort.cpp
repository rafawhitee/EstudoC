#include <stdio.h>
#include <stdlib.h>

void insertionSort(int arr[], int size);
void printArray(int arr[], int size);

int main(){
	int array[] = { 13, 1, 19, 0, -3, 12, 5, 7, 11, 192, 412, 2};
	printf("Antes da Ordenacao: \n");
	printArray(array, 12);
	
	printf("Depois da Ordenacao: \n");
	insertionSort(array, 12);
	printArray(array, 12);
	return 0;
}

void insertionSort(int arr[], int size){
	// Declara as 3 variáveis que serão usadas
	int i, j, aux;
	
	// Ele comecará sempre na posição 1 do vetor (segundo)
	for (i = 1; i <= size; i++){		
		// pega o valor atual
		aux = arr[i];
		
		// J será o anterior do valor atual
		j = i-1;
		
		// enquanto j for maior ou igual a 0
		// e o valor do auxiliar for menor que o anterior ele troca...
		while ((j >= 0) && (aux < arr[j])){
	        arr[j+1] = arr[j];
	        j--;
	    }
	    // como no while decrementou o j, aqui tem que ser j+1, para ser na posição certa...
	    // imagina se ele está na primeira vez (ele começou no index 1).
	    // se precisar trocar index 1 pelo index 0
	    // o j valeria -1, somando irá para 0 (o menor número por enquanto)...
	    arr[j+1] = aux;
	}
}

void printArray(int arr[], int size){
	for(int i = 0 ; i < size ; i++){
		printf("array[%i]: %i \n", i, arr[i]);
	}
}
