#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lista.h"

lista crea_lista(){
	lista nueva = malloc(sizeof(lista));
	(*nueva).longitud = 0;
	nueva->cabeza = NULL;
	nueva->rabo = NULL;
	return nueva;
}

void agrega_inicio(void * elemento, lista l){
	nodo nuevo = malloc(sizeof(nodo));
	nuevo->elemento = elemento;
	nuevo->siguiente = l->cabeza;
	l->cabeza = nuevo;
	l->longitud = l->longitud +1; 
}

void agrega_fin(void *elemento, lista l){
	nodo nuevo = malloc(sizeof(nodo));
	nuevo->elemento = elemento;
	l -> longitud = l -> longitud + 1;
	if (l -> rabo == NULL){
		l -> cabeza = nuevo;
		l -> rabo = nuevo;
	} else {
		nodo antiguo = l -> rabo;
		antiguo -> siguiente = nuevo;
		l -> rabo = nuevo;
	}
}

void *elimina_inicio(lista l){
	nodo n = l->cabeza;
	if(l->longitud == 1){
		l->cabeza = NULL;
		l->rabo = NULL;
	}else{
		l->cabeza = n->siguiente;
	}
	l->longitud = l->longitud-1;
	par aux = n->elemento;
	free(n);
	return aux; 
}

void borra_lista(lista l){
	if(l->longitud != 0){
		nodo n = l->cabeza;
		while(n != NULL){
			nodo ni = n;
			n = n->siguiente;
			free(ni->elemento);
			free(ni);
		}
	}
	free(l);
}


/*int main(){*/
/*	lista l = crea_lista();*/
/*	printf("%d\n",l->longitud);*/
/*	int i;*/
/*	for(i = 0; i < 10; i++){*/
/*		char *lee = malloc(sizeof(char)*100);*/
/*		scanf("%s",lee);*/
/*		agrega_fin(lee,l);*/
/*	}*/
/*	nodo n = l->cabeza;*/
/*	for(i = 0; i < 10; i++){*/
/*		printf("%s\n",(char*)(n->elemento));*/
/*		n = n->siguiente;*/
/*	}*/
/*	printf("%d\n",l->longitud);*/
/*	for(i = 0; i < 10; i++){*/
/*		printf("%s\n",(char*)(elimina_inicio(l)));*/
/*	}*/
/*	printf("%d\n",l->longitud);*/
/*	borra_lista(l);*/
/*	return 0;*/
/*}*/
