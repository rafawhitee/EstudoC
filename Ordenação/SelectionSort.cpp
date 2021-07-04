#include <stdio.h>
#include <stdlib.h>

#define SIZE 14

void selectionSort(int num[], int size);
void printArray(int arr[], int size);

int main(){
	int array[] = {192, 912, 1, -7, 1031022, 13, 11, 5, 9, 12, 345, 1002, 91200, 22};
	printf("Antes da Ordenacao: \n");
	printArray(array, SIZE);
	printf("\n \n");
	
	selectionSort(array, SIZE);
	printf("Depos da Ordenacao: \n");
	printArray(array, SIZE);
	return 0;
}

void selectionSort(int num[], int size) {
	int i, j, min, aux;
  	for (i = 0; i < (size-1); i++){
  		
  		// Primeiro pega o index do menor valor no array...
	    min = i;
	    for (j = (i+1); j < size; j++) {
	       if(num[j] < num[min]) {
	       	 min = j;
		   }
	    }
	    
	    printf("%i \n", min);
	    
	    // se o i (inicial) for diferente, pois tem alguém menor...
	    // se for igual, pq o primeiro já é o menor
	    if (i != min) {
	       // faz a troca entre posições
	       aux = num[i];
	       num[i] = num[min];
	       num[min] = aux;
	    }
    }
}

void printArray(int arr[], int size){
	for(int i = 0 ; i < size ; i++){
		printf("array[%i]: %i \n", i, arr[i]);
	}
}
