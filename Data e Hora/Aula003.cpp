#include <stdio.h>
#include <time.h>

int main(){                           
	// difftime, usado para calcular diferencas de datas
	time_t start, end;
	long contador;
	 
	start = time(NULL);
	 
	for(contador = 0 ; contador < 50000 ; contador++){
		printf("%d \n", contador);
	}
	 
	end = time(NULL);
	printf("O loop foi executado em em %f segundos \n", difftime(end, start));
	
	puts("-- MANIPULANDO A DATA --");
	
	// modificando os valores da struct
	struct tm str_time;
    time_t hora_do_dia;
    
	str_time.tm_year = 2019-1900;
	str_time.tm_mon = 7;
	str_time.tm_mday = 24;
	str_time.tm_hour = 10;
	str_time.tm_min = 3;
	str_time.tm_sec = 5;
	str_time.tm_isdst = 0;

	// usa o mktime para criar o time_t e imprimir
	hora_do_dia = mktime(&str_time);
	printf("Data e Hora Manipulada: %s \n", ctime(&hora_do_dia));
	
	return 0;
}
