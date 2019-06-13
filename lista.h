typedef struct pr{
	char* cadena;
	int valor;
} *par;

typedef struct no{
	void *elemento;
	struct no *siguiente;
} *nodo;

typedef struct li{
	nodo cabeza;
	nodo rabo;
	int longitud;
} *lista;

lista crea_lista(void);

void agrega_inicio(void *elemento, lista l);

void agrega_fin(void *elemento, lista l);

void *elimina_inicio(lista l);

void borra_lista(lista l);


