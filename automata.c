#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"

int delta[40][150];

int base = 5000000;

int linea = 0;

lista etiquetas;
lista lexemas;

char o[300000]; // tamaño máximo del programa

void carga_automata(){
	for(int i = 0;i<40;i++){
		for(int j = 0;j<149;j++){
			delta[i][j] = -1;
		}
	}
	delta[0]['0'] = 27;
	delta[0]['1'] = 27;
	delta[0]['2'] = 27;
	delta[0]['3'] = 27;
	delta[0]['4'] = 27;
	delta[0]['5'] = 27;
	delta[0]['6'] = 27;
	delta[0]['7'] = 27;
	delta[0]['8'] = 27;
	delta[0]['9'] = 27;
	delta[0]['a'] = 21;
	delta[0]['b'] = 23;
	delta[0]['c'] = 33;
	delta[0]['d'] = 33;
	delta[0]['e'] = 33;
	delta[0]['f'] = 33;
	delta[0]['g'] = 33;
	delta[0]['h'] = 33;
	delta[0]['i'] = 33;
	delta[0]['j'] = 26;
	delta[0]['k'] = 33;
	delta[0]['l'] = 20;
	delta[0]['m'] = 33;
	delta[0]['n'] = 33;
	delta[0]['o'] = 37;
	delta[0]['p'] = 33;
	delta[0]['q'] = 33;
	delta[0]['r'] = 33;
	delta[0]['s'] = 16;
	delta[0]['t'] = 33;
	delta[0]['u'] = 33;
	delta[0]['v'] = 33;
	delta[0]['w'] = 33;
	delta[0]['x'] = 33;
	delta[0]['y'] = 33;
	delta[0]['z'] = 33;
	delta[0]['.'] = 1;
	delta[0]['$'] = 14;
	delta[1]['b'] = 11;
	delta[1]['d'] = 2;
	delta[1]['t'] = 5;
	delta[1]['w'] = 8;
	delta[2]['a'] = 3;
	delta[3]['t'] = 4;
	delta[4]['a'] = 34;
	delta[5]['e'] = 6;
	delta[6]['x'] = 7;
	delta[7]['t'] = 34;
	delta[8]['o'] = 9;
	delta[9]['r'] = 10;
	delta[10]['d'] = 34;
	delta[11]['y'] = 12;
	delta[12]['t'] = 13;
	delta[13]['e'] = 34;
	delta[14]['0'] = 15;
	delta[14]['1'] = 15;
	delta[14]['2'] = 15;
	delta[14]['3'] = 15;
	delta[14]['4'] = 15;
	delta[14]['5'] = 15;
	delta[14]['6'] = 15;
	delta[14]['7'] = 15;
	delta[14]['8'] = 15;
	delta[14]['9'] = 15;
	delta[15]['0'] = 36;
	delta[15]['1'] = 36;
	delta[15]['2'] = 36;
	delta[15]['3'] = 36;
	delta[15]['4'] = 36;
	delta[15]['5'] = 36;
	delta[15]['6'] = 36;
	delta[15]['7'] = 36;
	delta[15]['8'] = 36;
	delta[15]['9'] = 36;
	delta[16]['0'] = 33;
	delta[16]['1'] = 33;
	delta[16]['2'] = 33;
	delta[16]['3'] = 33;
	delta[16]['4'] = 33;
	delta[16]['5'] = 33;
	delta[16]['6'] = 33;
	delta[16]['7'] = 33;
	delta[16]['8'] = 33;
	delta[16]['9'] = 33;
	delta[16]['a'] = 33;
	delta[16]['b'] = 19;
	delta[16]['c'] = 33;
	delta[16]['d'] = 33;
	delta[16]['e'] = 33;
	delta[16]['f'] = 33;
	delta[16]['g'] = 33;
	delta[16]['h'] = 19;
	delta[16]['i'] = 33;
	delta[16]['j'] = 33;
	delta[16]['k'] = 33;
	delta[16]['l'] = 33;
	delta[16]['m'] = 33;
	delta[16]['n'] = 33;
	delta[16]['o'] = 33;
	delta[16]['p'] = 33;
	delta[16]['q'] = 33;
	delta[16]['r'] = 33;
	delta[16]['s'] = 33;
	delta[16]['t'] = 33;
	delta[16]['u'] = 17;
	delta[16]['v'] = 33;
	delta[16]['w'] = 19;
	delta[16]['x'] = 33;
	delta[16]['y'] = 33;
	delta[16]['z'] = 33;
	delta[16][':'] = 35;
	delta[17]['0'] = 33;
	delta[17]['1'] = 33;
	delta[17]['2'] = 33;
	delta[17]['3'] = 33;
	delta[17]['4'] = 33;
	delta[17]['5'] = 33;
	delta[17]['6'] = 33;
	delta[17]['7'] = 33;
	delta[17]['8'] = 33;
	delta[17]['9'] = 33;
	delta[17]['a'] = 33;
	delta[17]['b'] = 18;
	delta[17]['c'] = 33;
	delta[17]['d'] = 33;
	delta[17]['e'] = 33;
	delta[17]['f'] = 33;
	delta[17]['g'] = 33;
	delta[17]['h'] = 33;
	delta[17]['i'] = 33;
	delta[17]['j'] = 33;
	delta[17]['k'] = 33;
	delta[17]['l'] = 33;
	delta[17]['m'] = 33;
	delta[17]['n'] = 33;
	delta[17]['o'] = 33;
	delta[17]['p'] = 33;
	delta[17]['q'] = 33;
	delta[17]['r'] = 33;
	delta[17]['s'] = 33;
	delta[17]['t'] = 33;
	delta[17]['u'] = 33;
	delta[17]['v'] = 33;
	delta[17]['w'] = 33;
	delta[17]['x'] = 33;
	delta[17]['y'] = 33;
	delta[17]['z'] = 33;
	delta[17][':'] = 35;
	delta[18]['0'] = 33;
	delta[18]['1'] = 33;
	delta[18]['2'] = 33;
	delta[18]['3'] = 33;
	delta[18]['4'] = 33;
	delta[18]['5'] = 33;
	delta[18]['6'] = 33;
	delta[18]['7'] = 33;
	delta[18]['8'] = 33;
	delta[18]['9'] = 33;
	delta[18]['a'] = 33;
	delta[18]['b'] = 33;
	delta[18]['c'] = 33;
	delta[18]['d'] = 33;
	delta[18]['e'] = 33;
	delta[18]['f'] = 33;
	delta[18]['g'] = 33;
	delta[18]['h'] = 33;
	delta[18]['i'] = 19;
	delta[18]['j'] = 33;
	delta[18]['k'] = 33;
	delta[18]['l'] = 33;
	delta[18]['m'] = 33;
	delta[18]['n'] = 33;
	delta[18]['o'] = 33;
	delta[18]['p'] = 33;
	delta[18]['q'] = 33;
	delta[18]['r'] = 33;
	delta[18]['s'] = 33;
	delta[18]['t'] = 33;
	delta[18]['u'] = 33;
	delta[18]['v'] = 33;
	delta[18]['w'] = 33;
	delta[18]['x'] = 33;
	delta[18]['y'] = 33;
	delta[18]['z'] = 33;
	delta[19]['0'] = 33;
	delta[19]['1'] = 33;
	delta[19]['2'] = 33;
	delta[19]['3'] = 33;
	delta[19]['4'] = 33;
	delta[19]['5'] = 33;
	delta[19]['6'] = 33;
	delta[19]['7'] = 33;
	delta[19]['8'] = 33;
	delta[19]['9'] = 33;
	delta[19]['a'] = 33;
	delta[19]['b'] = 33;
	delta[19]['c'] = 33;
	delta[19]['d'] = 33;
	delta[19]['e'] = 33;
	delta[19]['f'] = 33;
	delta[19]['g'] = 33;
	delta[19]['h'] = 33;
	delta[19]['i'] = 33;
	delta[19]['j'] = 33;
	delta[19]['k'] = 33;
	delta[19]['l'] = 33;
	delta[19]['m'] = 33;
	delta[19]['n'] = 33;
	delta[19]['o'] = 33;
	delta[19]['p'] = 33;
	delta[19]['q'] = 33;
	delta[19]['r'] = 33;
	delta[19]['s'] = 33;
	delta[19]['t'] = 33;
	delta[19]['u'] = 33;
	delta[19]['v'] = 33;
	delta[19]['w'] = 33;
	delta[19]['x'] = 33;
	delta[19]['y'] = 33;
	delta[19]['z'] = 33;
	delta[20]['0'] = 33;
	delta[20]['1'] = 33;
	delta[20]['2'] = 33;
	delta[20]['3'] = 33;
	delta[20]['4'] = 33;
	delta[20]['5'] = 33;
	delta[20]['6'] = 33;
	delta[20]['7'] = 33;
	delta[20]['8'] = 33;
	delta[20]['9'] = 33;
	delta[20]['a'] = 33;
	delta[20]['b'] = 19;
	delta[20]['c'] = 33;
	delta[20]['d'] = 33;
	delta[20]['e'] = 33;
	delta[20]['f'] = 33;
	delta[20]['g'] = 33;
	delta[20]['h'] = 19;
	delta[20]['i'] = 33;
	delta[20]['j'] = 33;
	delta[20]['k'] = 33;
	delta[20]['l'] = 33;
	delta[20]['m'] = 33;
	delta[20]['n'] = 33;
	delta[20]['o'] = 33;
	delta[20]['p'] = 33;
	delta[20]['q'] = 33;
	delta[20]['r'] = 33;
	delta[20]['s'] = 33;
	delta[20]['t'] = 33;
	delta[20]['u'] = 33;
	delta[20]['v'] = 33;
	delta[20]['w'] = 19;
	delta[20]['x'] = 33;
	delta[20]['y'] = 33;
	delta[20]['z'] = 33;
	delta[20][':'] = 35;
	delta[21]['0'] = 33;
	delta[21]['1'] = 33;
	delta[21]['2'] = 33;
	delta[21]['3'] = 33;
	delta[21]['4'] = 33;
	delta[21]['5'] = 33;
	delta[21]['6'] = 33;
	delta[21]['7'] = 33;
	delta[21]['8'] = 33;
	delta[21]['9'] = 33;
	delta[21]['a'] = 33;
	delta[21]['b'] = 33;
	delta[21]['c'] = 33;
	delta[21]['d'] = 22;
	delta[21]['e'] = 33;
	delta[21]['f'] = 33;
	delta[21]['g'] = 33;
	delta[21]['h'] = 33;
	delta[21]['i'] = 33;
	delta[21]['j'] = 33;
	delta[21]['k'] = 33;
	delta[21]['l'] = 33;
	delta[21]['m'] = 33;
	delta[21]['n'] = 22;
	delta[21]['o'] = 33;
	delta[21]['p'] = 33;
	delta[21]['q'] = 33;
	delta[21]['r'] = 33;
	delta[21]['s'] = 33;
	delta[21]['t'] = 33;
	delta[21]['u'] = 33;
	delta[21]['v'] = 33;
	delta[21]['w'] = 33;
	delta[21]['x'] = 33;
	delta[21]['y'] = 33;
	delta[21]['z'] = 33;
	delta[21][':'] = 35;
	delta[22]['0'] = 33;
	delta[22]['1'] = 33;
	delta[22]['2'] = 33;
	delta[22]['3'] = 33;
	delta[22]['4'] = 33;
	delta[22]['5'] = 33;
	delta[22]['6'] = 33;
	delta[22]['7'] = 33;
	delta[22]['8'] = 33;
	delta[22]['9'] = 33;
	delta[22]['a'] = 33;
	delta[22]['b'] = 33;
	delta[22]['c'] = 33;
	delta[22]['d'] = 18;
	delta[22]['e'] = 33;
	delta[22]['e'] = 33;
	delta[22]['f'] = 33;
	delta[22]['g'] = 33;
	delta[22]['h'] = 33;
	delta[22]['i'] = 33;
	delta[22]['j'] = 33;
	delta[22]['k'] = 33;
	delta[22]['l'] = 33;
	delta[22]['m'] = 33;
	delta[22]['n'] = 33;
	delta[22]['o'] = 33;
	delta[22]['p'] = 33;
	delta[22]['q'] = 33;
	delta[22]['r'] = 33;
	delta[22]['s'] = 33;
	delta[22]['t'] = 33;
	delta[22]['u'] = 33;
	delta[22]['v'] = 33;
	delta[22]['w'] = 33;
	delta[22]['x'] = 33;
	delta[22]['y'] = 33;
	delta[22]['z'] = 33;
	delta[22][':'] = 35;
	delta[23]['0'] = 33;
	delta[23]['1'] = 33;
	delta[23]['2'] = 33;
	delta[23]['3'] = 33;
	delta[23]['4'] = 33;
	delta[23]['5'] = 33;
	delta[23]['6'] = 33;
	delta[23]['7'] = 33;
	delta[23]['8'] = 33;
	delta[23]['9'] = 33;
	delta[23]['a'] = 33;
	delta[23]['b'] = 33;
	delta[23]['c'] = 33;
	delta[23]['d'] = 33;
	delta[23]['e'] = 24;
	delta[23]['f'] = 33;
	delta[23]['g'] = 25;
	delta[23]['h'] = 33;
	delta[23]['i'] = 33;
	delta[23]['j'] = 33;
	delta[23]['k'] = 33;
	delta[23]['l'] = 33;
	delta[23]['m'] = 33;
	delta[23]['n'] = 33;
	delta[23]['o'] = 33;
	delta[23]['p'] = 33;
	delta[23]['q'] = 33;
	delta[23]['r'] = 33;
	delta[23]['s'] = 33;
	delta[23]['t'] = 33;
	delta[23]['u'] = 33;
	delta[23]['v'] = 33;
	delta[23]['w'] = 33;
	delta[23]['x'] = 33;
	delta[23]['y'] = 33;
	delta[23]['z'] = 33;
	delta[23][':'] = 35;
	delta[24]['0'] = 33;
	delta[24]['1'] = 33;
	delta[24]['2'] = 33;
	delta[24]['3'] = 33;
	delta[24]['4'] = 33;
	delta[24]['5'] = 33;
	delta[24]['6'] = 33;
	delta[24]['7'] = 33;
	delta[24]['8'] = 33;
	delta[24]['9'] = 33;
	delta[24]['a'] = 33;
	delta[24]['b'] = 33;
	delta[24]['c'] = 33;
	delta[24]['d'] = 33;
	delta[24]['e'] = 33;
	delta[24]['f'] = 33;
	delta[24]['g'] = 33;
	delta[24]['h'] = 33;
	delta[24]['i'] = 33;
	delta[24]['j'] = 33;
	delta[24]['k'] = 33;
	delta[24]['l'] = 33;
	delta[24]['m'] = 33;
	delta[24]['n'] = 33;
	delta[24]['o'] = 33;
	delta[24]['p'] = 33;
	delta[24]['q'] = 19;
	delta[24]['r'] = 33;
	delta[24]['s'] = 33;
	delta[24]['t'] = 33;
	delta[24]['u'] = 33;
	delta[24]['v'] = 33;
	delta[24]['w'] = 33;
	delta[24]['x'] = 33;
	delta[24]['y'] = 33;
	delta[24]['z'] = 33;
	delta[24][':'] = 35;
	delta[25]['0'] = 33;
	delta[25]['1'] = 33;
	delta[25]['2'] = 33;
	delta[25]['3'] = 33;
	delta[25]['4'] = 33;
	delta[25]['5'] = 33;
	delta[25]['6'] = 33;
	delta[25]['7'] = 33;
	delta[25]['8'] = 33;
	delta[25]['9'] = 33;
	delta[25]['a'] = 33;
	delta[25]['b'] = 33;
	delta[25]['c'] = 33;
	delta[25]['d'] = 33;
	delta[25]['e'] = 33;
	delta[25]['f'] = 33;
	delta[25]['g'] = 33;
	delta[25]['h'] = 33;
	delta[25]['i'] = 33;
	delta[25]['j'] = 33;
	delta[25]['k'] = 33;
	delta[25]['l'] = 33;
	delta[25]['m'] = 33;
	delta[25]['n'] = 33;
	delta[25]['o'] = 33;
	delta[25]['p'] = 33;
	delta[25]['q'] = 33;
	delta[25]['r'] = 33;
	delta[25]['s'] = 33;
	delta[25]['t'] = 19;
	delta[25]['u'] = 33;
	delta[25]['v'] = 33;
	delta[25]['w'] = 33;
	delta[25]['x'] = 33;
	delta[25]['y'] = 33;
	delta[25]['z'] = 33;
	delta[25][':'] = 35;
	delta[26]['0'] = 33;
	delta[26]['1'] = 33;
	delta[26]['2'] = 33;
	delta[26]['3'] = 33;
	delta[26]['4'] = 33;
	delta[26]['5'] = 33;
	delta[26]['6'] = 33;
	delta[26]['7'] = 33;
	delta[26]['8'] = 33;
	delta[26]['9'] = 33;
	delta[26]['a'] = 33;
	delta[26]['b'] = 33;
	delta[26]['c'] = 33;
	delta[26]['d'] = 33;
	delta[26]['e'] = 33;
	delta[26]['f'] = 33;
	delta[26]['g'] = 33;
	delta[26]['h'] = 33;
	delta[26]['i'] = 33;
	delta[26]['j'] = 33;
	delta[26]['k'] = 33;
	delta[26]['l'] = 33;
	delta[26]['m'] = 33;
	delta[26]['n'] = 33;
	delta[26]['o'] = 33;
	delta[26]['p'] = 33;
	delta[26]['q'] = 33;
	delta[26]['r'] = 19;
	delta[26]['s'] = 33;
	delta[26]['t'] = 33;
	delta[26]['u'] = 33;
	delta[26]['v'] = 33;
	delta[26]['w'] = 33;
	delta[26]['x'] = 33;
	delta[26]['y'] = 33;
	delta[26]['z'] = 33;
	delta[27]['0'] = 27;
	delta[27]['1'] = 27;
	delta[27]['2'] = 27;
	delta[27]['3'] = 27;
	delta[27]['4'] = 27;
	delta[27]['5'] = 27;
	delta[27]['6'] = 27;
	delta[27]['7'] = 27;
	delta[27]['8'] = 27;
	delta[27]['9'] = 27;
	delta[27]['('] = 28;
	delta[28]['$'] = 29;
	delta[28]['$'] = 29;
	delta[29]['0'] = 30;
	delta[29]['1'] = 30;
	delta[29]['2'] = 30;
	delta[29]['3'] = 30;
	delta[29]['4'] = 30;
	delta[29]['5'] = 30;
	delta[29]['6'] = 30;
	delta[29]['7'] = 30;
	delta[29]['8'] = 30;
	delta[29]['9'] = 30;
	delta[30]['0'] = 31;
	delta[30]['1'] = 31;
	delta[30]['2'] = 31;
	delta[30]['3'] = 31;
	delta[30]['4'] = 31;
	delta[30]['5'] = 31;
	delta[30]['6'] = 31;
	delta[30]['7'] = 31;
	delta[30]['8'] = 31;
	delta[30]['9'] = 31;
	delta[31][')'] = 32;
	delta[33]['0'] = 33;
	delta[33]['1'] = 33;
	delta[33]['2'] = 33;
	delta[33]['3'] = 33;
	delta[33]['4'] = 33;
	delta[33]['5'] = 33;
	delta[33]['6'] = 33;
	delta[33]['7'] = 33;
	delta[33]['8'] = 33;
	delta[33]['9'] = 33;
	delta[33]['a'] = 33;
	delta[33]['b'] = 33;
	delta[33]['c'] = 33;
	delta[33]['d'] = 33;
	delta[33]['e'] = 33;
	delta[33]['f'] = 33;
	delta[33]['g'] = 33;
	delta[33]['h'] = 33;
	delta[33]['i'] = 33;
	delta[33]['j'] = 33;
	delta[33]['k'] = 33;
	delta[33]['l'] = 33;
	delta[33]['m'] = 33;
	delta[33]['n'] = 33;
	delta[33]['o'] = 33;
	delta[33]['p'] = 33;
	delta[33]['q'] = 33;
	delta[33]['r'] = 33;
	delta[33]['s'] = 33;
	delta[33]['t'] = 33;
	delta[33]['u'] = 33;
	delta[33]['v'] = 33;
	delta[33]['w'] = 33;
	delta[33]['x'] = 33;
	delta[33]['y'] = 33;
	delta[33]['z'] = 33;
	delta[33][':'] = 35;
	delta[37]['0'] = 33;
	delta[37]['1'] = 33;
	delta[37]['2'] = 33;
	delta[37]['3'] = 33;
	delta[37]['4'] = 33;
	delta[37]['5'] = 33;
	delta[37]['6'] = 33;
	delta[37]['7'] = 33;
	delta[37]['8'] = 33;
	delta[37]['9'] = 33;
	delta[37]['a'] = 33;
	delta[37]['b'] = 33;
	delta[37]['c'] = 33;
	delta[37]['d'] = 33;
	delta[37]['e'] = 33;
	delta[37]['f'] = 33;
	delta[37]['g'] = 33;
	delta[37]['h'] = 33;
	delta[37]['i'] = 33;
	delta[37]['j'] = 33;
	delta[37]['k'] = 33;
	delta[37]['l'] = 33;
	delta[37]['m'] = 33;
	delta[37]['n'] = 33;
	delta[37]['o'] = 33;
	delta[37]['p'] = 33;
	delta[37]['q'] = 33;
	delta[37]['r'] = 18;
	delta[37]['s'] = 33;
	delta[37]['t'] = 33;
	delta[37]['u'] = 33;
	delta[37]['v'] = 33;
	delta[37]['w'] = 33;
	delta[37]['x'] = 33;
	delta[37]['y'] = 33;
	delta[37]['z'] = 33;
	delta[16][149] = 1;//etiqueta
	delta[17][149] = 1;//etiqueta
	delta[18][149] = 2;//instruccion
	delta[19][149] = 2;//instruccion
	delta[20][149] = 1;//etiqueta
	delta[21][149] = 1;//etiqueta
	delta[22][149] = 1;//etiqueta
	delta[23][149] = 1;//etiqueta
	delta[24][149] = 1;//etiqueta
	delta[25][149] = 1;//etiqueta
	delta[26][149] = 2;//instruccion
	delta[27][149] = 3;//inmediato
	delta[32][149] = 4;//direccionamiento
	delta[33][149] = 1;//etiqueta
	delta[34][149] = 5;//directiva
	delta[35][149] = 6;//declaracion de etiqueta
	delta[36][149] = 7;//registro
}

par valida_palabra(char* palabra){
	int estado = 0;
	char *aux = palabra;
	while(*aux != '\0' && estado != -1){
		printf("%d %c\n", estado, *aux);
		estado = delta[estado][*aux];
		aux = aux + 1;
	}
	if(estado == -1)
		return NULL;
	char *nueva = malloc(sizeof(char));
	par p = malloc(sizeof(par));
	strcpy(nueva,palabra);
	p->cadena = nueva;
	p->valor = delta[estado][149];
	return p;
}

int divide_lexemas(FILE *f) {
	char *c = malloc(sizeof(char)*500);
	int linea = 0;
	while(fgets(c,500,f) != NULL){
		linea++;
		char *t = malloc(sizeof(char)*500);
		t = strtok(c, " 	\n\0");
		while(t != NULL) {
			par p = valida_palabra(t);
			if(p == NULL){
				printf("Error de Sintaxis\n Línea %d\n", linea);
				return -1;
			}
			if(p->valor == 6) {
				par q = malloc(sizeof(par));
				char *c1 = malloc(sizeof(char)*500);;
				strncpy(c1, p->cadena, strlen(p->cadena)-1);
				q->cadena = c1;
				q->valor = base+(linea*4);
				agrega_fin(q, etiquetas);
				printf("nueva etiqueta %s en %d\n", q->cadena, q-> valor);
			}
			printf("%s %d\n",p->cadena,p->valor);

			agrega_fin(p,lexemas);
			t = strtok (NULL, " 	\n\0");
		}
	}
	return 0;
}

par busca_etiqueta(char *str) {
	nodo i = etiquetas -> cabeza;
	while(i != NULL) {
		par ip = (par)(i->elemento);
		if (ip->cadena == str) return ip;
		i = i->siguiente;
	}
	printf("etiqueta %s no econtrada\n", str);
	return NULL;
}

void to_bin(int n, char buf[]) {
	int i = strlen(buf)-1;
	int c = (n < 0);
	for(i; i >= 0; i --) {
		int r = n % 2;
		n /= 2;
		buf[i] = '0'+r;
	}
	if(c) {
		int i = strlen(buf)-1;
		for(i; i >= 0; i --) {
			if(buf[i] == '1') break;
		}
		for(i; i >= 0; i --) {
			if(buf[i] == '1') buf[i] = '0';
			else buf[i] = '1';
		}
	}
	printf("%s\n", buf);
}

char* codifica_inst_imm(char *str) {
	char *buf = "";
	if(!strcmp(str, "addi")) buf = "000001";
	else if(!strcmp(str, "subi")) buf = "000010";
	else if(!strcmp(str, "andi")) buf = "000011";
	else if(!strcmp(str, "ori")) buf = "000100";
	else return NULL;
	char *c = malloc(sizeof(char)*7);
	strcpy(c, buf);
	return c;
}

char* codifica_reg(char *str) {
	char buf[] = "00000";
	printf("%s reg_num: %d\n", str+1, atoi(str+1));
	to_bin(atoi(str+1), buf);
	char *c = malloc(sizeof(char)*6);
	strcpy(c, buf);
	return c;
}

char* codifica_imm(char *str) {
	char buf[] = "0000000000000000";
	int reg_num = atoi(str);
	to_bin(reg_num, buf);
	char *c = malloc(sizeof(char)*17);
	strcpy(c, buf);
	return c;
}

// No estoy seguro de cómo se tiene que traduciar la parte de data.
nodo asm_data_tag(nodo i) {
	return i;
}

nodo asm_imm(nodo nop) {
	char linea[100] = "";
	if(nop == NULL) {
		printf("operación inmediata vacía\n");
		return NULL;
	}
	par por = (par) (nop -> elemento);
	if(por -> valor != 2) {
		printf("primer término no es una operación\n");
		return NULL;
	}
	char *op = codifica_inst_imm(por->cadena);
	if(op == NULL) {
		printf("operador inmediato inválido\n");
		return NULL;
	}
	strcat(linea, op);

	nodo nrs = nop -> siguiente;
	if(nrs == NULL) {
		printf("primer operando de inmediata vacía\n");
		return NULL;
	}
	par prs = (par) (nrs -> elemento);
	if(prs -> valor != 7) {
		printf("primer operando de inmediata no es registro\n");
		return NULL;
	}
	char *rs = codifica_reg(prs->cadena);
	strcat(linea, rs);

	nodo nrd = nrs -> siguiente;
	if(nrd == NULL) {
		printf("segundo operando de inmediata vacía\n");
		return NULL;
	}
	par prd = (par) (nrd -> elemento);
	if(prd -> valor != 7) {
		printf("segundo operando de inmediata no es registro\n");
		return NULL;
	}
	char *rd = codifica_reg(prd->cadena);
	strcat(linea, rd);

	nodo nimm = nrd -> siguiente;
	if(nimm == NULL) {
		printf("inmediato de inmediata vacío\n");
		return NULL;
	}
	par pimm = (par) (nimm -> elemento);
	if(pimm -> valor != 3) {
		printf("tercer operando de inmediata no es inmediato\n");
		return NULL;
	}
	char *imm = codifica_imm(pimm->cadena);
	strcat(linea, imm);
	
	strcat(linea, "\n");
	strcat(o, linea);
	return nimm;
}

nodo asm_ls(nodo i){
	return NULL;
}

nodo asm_jump(nodo nop) {
	return NULL;
}

char* codifica_inst_reg(char *str) {
	char *buf = "";
	if(!strcmp(str, "add")) buf = "00000000001";
	else if(!strcmp(str, "sub")) buf = "00000000010";
	else if(!strcmp(str, "and")) buf = "00000000011";
	else if(!strcmp(str, "or")) buf = "00000000100";
	else return NULL;
	char *c = malloc(sizeof(char)*11);
	strcpy(c, buf);
	return c;
}

nodo asm_reg(nodo nop) {
	char linea[100] = "000000";
	if(nop == NULL) {
		printf("operación con registros vacía\n");
		return NULL;
	}
	par por = (par) (nop -> elemento);
	if(por -> valor != 2) {
		printf("primer término no es una operación\n");
		return NULL;
	}
	char *op = codifica_inst_reg(por->cadena);
	if(op == NULL) {
		printf("operador de registros inválido\n");
		return NULL;
	}
	

	nodo nrs = nop -> siguiente;
	if(nrs == NULL) {
		printf("primer operando de registros vacía\n");
		return NULL;
	}
	par prs = (par) (nrs -> elemento);
	if(prs -> valor != 7) {
		printf("primer operando de registros no es registro\n");
		return NULL;
	}
	char *rs = codifica_reg(prs->cadena);
	strcat(linea, rs);

	nodo nrt = nrs -> siguiente;
	if(nrt == NULL) {
		printf("segundo operando de registros vacío\n");
		return NULL;
	}
	par prt = (par) (nrt -> elemento);
	if(prt -> valor != 7) {
		printf("segundo operando de registros no es registro\n");
		return NULL;
	}
	char *rt = codifica_reg(prt->cadena);
	strcat(linea, rt);

	nodo nrd = nrt -> siguiente;
	if(nrd == NULL) {
		printf("tercer operando de registros vacío\n");
		return NULL;
	}
	par prd = (par) (nrd -> elemento);
	if(prd -> valor != 7) {
		printf("tercer operando de registros no es registro\n");
		return NULL;
	}
	char *rd = codifica_reg(prd->cadena);
	strcat(linea, rd);

	strcat(linea, op);

	strcat(linea, "\n");
	
	strcat(o, linea);
	return nrd;
}

nodo asm_inst(nodo i) {
	par ip = (par) (i -> elemento);
	char *cod = ip->cadena;
	nodo r;
	if(cod[strlen(cod)-1] == 'i') {
		printf("operador inmediato explícito encontrado\n");
		r = asm_imm(i);
	} else if(cod[0] == 's' || cod[0] == 'l'){
		printf("operador inmediato implícito encontrado\n");
		r = asm_ls(i);
	} else if(cod[0] == 'b' || cod[0] == 'j'){
		printf("operador de salto encontrado\n");
		r = asm_jump(i);
	}
	else {
		printf("operador de registros encontrado\n");
		r = asm_reg(i);
	};
	return r;
}

nodo procesa_data(nodo i) {
	par ip = (par) (i -> elemento);
	if((ip->valor) != 5 || strcmp(".data", ip->cadena)) {
		printf("no hay sección de data\n");
		return NULL;
	}
	i = i->siguiente;
	while(i != NULL) {
		par ip = (par) (i -> elemento);
		switch (ip->valor) {
		case 5:
			if(!strcmp(".text", ip->cadena)) return i;
		case 6:
			i = asm_data_tag(i);
			break;
		default:
			printf("data: inicio inválido de línea\n");
			return NULL;
		}
		if(i == NULL) {
			printf("data: problemas al intentar codificar etiquetas\n");
			return NULL;
		}
		i = i->siguiente;
	}
	return NULL;
}



int procesa_text(nodo i) {
	par ip = (par) (i -> elemento);
	if((ip->valor) != 5 || strcmp(".text", ip->cadena)) {
		printf("no hay sección de text\n");
		return -1;
	}
	i = i->siguiente;
	while(i != NULL) {
		par ip = (par) (i -> elemento);
		switch (ip -> valor) {
		case 6:
			break;
		case 2:
			i = asm_inst(i);
			break;
		default:
			printf("text: inicio inválido de línea\n");
			return -1;
		}
		if(i == NULL) {
			printf("text: problemas al intentar codificar etiquetas\n");
			return -1;
		}
		i = i->siguiente;
	}
	return 0;
}

int procesa_inst(){
	nodo i = lexemas -> cabeza;
	if(i == NULL) {
		printf("no hay código\n");
		return -1;
	}
	
	i = procesa_data(i);
	if(i == NULL) {
		printf("problemas al intentar codificar la sección de data\n");
		return -1;
	}

	return procesa_text(i);
}

int main(int argc, char** argv){
	carga_automata();
	FILE *f;
	f = fopen(argv[1],"r");
	lexemas = crea_lista();
	etiquetas = crea_lista();
	//o = "";

	//char c[] = "00000";
	//to_bin(1, 6, buf);
	//printf("%s\n", buf);
	if(divide_lexemas(f) == -1) return -1;
	printf("número de lexemas %d\n", lexemas -> longitud);

	if(procesa_inst() == -1) return -1;
	
	printf("código final: \n%s\n", o);
}
