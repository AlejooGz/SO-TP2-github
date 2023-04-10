#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>

int cant = 0;

void manejador (int num) {

	printf("Se recibio SIGINT\n");
	cant++;

	if(cant == 3){
		printf("Finalizo mi ejecucion\n");
		exit(1);
	}
}

int main(){

	signal(2, manejador);
	while(1);
}
