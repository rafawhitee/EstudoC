#include <stdio.h>
#include <time.h>

int main(){
	// time_t é a struct time.h com os dados da data/hora
	time_t time1;
	
	// Recupera a data/hora atual
	time1 = time(NULL);
	printf("O numero de horas desde 1 de janeiro de 1970 e: %d \n", time1 / 3600);
	
	// o ctime converte a data/hora para string
	printf("Utilizando o ctime: %s \n", ctime(&time1));
	
	return 0;
}
