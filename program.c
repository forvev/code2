#include <stdio.h>
#include <stdlib.h>
#include "pole.h"
#include "objetosc.h"

int main(int argc, char *argv[]){
	if(argc == 1){
		printf("Podaj dlugosc boku!\n");
		exit(-1);
	}
	else if(argc == 2){
		printf("Pole: %.2f", pol(atoi(argv[1])) );
		printf("\nObjetosc: %.2f\n", obj(atoi(argv[1])) );		
	}
	else printf("Niepoprawne dane!\n");
	
	return 0;
}
