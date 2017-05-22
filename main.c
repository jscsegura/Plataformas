#include<stdio.h>

typedef struct{
struct post_t* siguiente;
int* numero;
}post_t;


post_t* primer = NULL;
post_t* ultimo = NULL;
post_t* primerNodo=NULL;

post_t* createList(int a){
//siguiente = NULL;
int *iptr = NULL;

primerNodo = malloc(sizeof(post_t));
primerNodo-> numero = a;
 
primer = primerNodo;
ultimo = primerNodo;

iptr = &a;

return iptr;
}



int main(){


//post_t* primerNodo = malloc(sizeof(post_t));
//primerNodo-> numero = a;

createList(9);

post_t* i=primerNodo;
while (i != NULL){
	printf("%d \n", i-> numero);
	i = i-> siguiente;
}

return 0;
}
