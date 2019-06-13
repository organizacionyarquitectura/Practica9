#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"



int base = 5000000;

int main(int argc, char** argv){
	FILE *f;
	f = fopen(argv[1],"r");
	char *c = malloc(sizeof(char)*500);
	lista l = crea_lista();
	int linea = 0;
	while(fgets(c,500,f) != NULL){
		char* aux = c;
		while(*aux != '\n'){
			if(*aux == ':' && c!= aux){
				*aux = '\0';
				char* c1 = malloc(strlen(c));
				strcpy(c1,c);
				par p = malloc(sizeof(par));
				p->cadena = c1;
				p->valor = base+(linea*4);
				agrega_inicio(p,l);
			}
			aux = aux + 1;
		}
		linea = linea + 1;
	}
	nodo n = l->cabeza;
	while(n != NULL){
		par p = (par)(n->elemento);
		printf("%s %d\n",p->cadena,p->valor);
		n = n->siguiente;
	}
	return 0;
}
