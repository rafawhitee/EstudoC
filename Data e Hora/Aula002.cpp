#include <stdio.h>
#include <time.h>

#define LEN 150

int main(){
	char buf[LEN];
    time_t curtime;
    
    // Declara a struct padrão do time.h
	struct tm *loc_time;

	 // obtém hora corrente do sistema
	 curtime = time(NULL);

	 // converte para a hora local
	 loc_time = localtime (&curtime);
	
	 // mostra hora e data no formato-padrão (Americano)
	 printf("Asctime: %s \n", asctime (loc_time));
	
	 // Mostra o Dia certinho (local)
	 strftime (buf, LEN, "Hoje e: %A, %b %d. \n", loc_time);
	 fputs (buf, stdout);
	 
	 // Mostra a hora certinha (local)
	 strftime (buf, LEN, "A hora e: %I:%M:%S %p. \n", loc_time);	
	 fputs (buf, stdout);
	 return 0;
}
