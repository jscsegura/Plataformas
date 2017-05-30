#include"lista.h"

/* Esta función tiene como función iniciar la lista, y agregar el primer elemento de esta, designando el primer espacio de memoria para este dato. */
pos_t* createList(int first_value){

/* Se designa el espacio de memoria para el primer nodo */
pos_t* head = NULL;
head = malloc(sizeof(pos_t));

/* Se asigna el valor  */
head->data = first_value;
head-> next = NULL;

return head;

}
//--------------------------------------
void printList(pos_t* head){


/* Dicha función itera sobre toda la lista e imprime la misma en orden */
pos_t* actual= head; //!< Variable local para apuntar al primer elemento

while (actual != NULL){
printf("%d\n", actual-> data);
actual= actual->next; /* Así se pasa al siguiente nodo */
}

}
//----------------------------------------

/* Dicha función intruduce un nuevo elemento al final de la lista */
int push_back(pos_t* head, int new_value){


pos_t* actual= head; //!< Variable local tipo puntero para apuntar al primer elemento



 /* Se itera sobre la lista hasta que se apunte al último elemento */
while (actual->next != NULL){
actual= actual->next; 
}

actual -> next=malloc(sizeof(pos_t)); 
/* En caso de que no haya espacio, se devuelve un uno. */
	if (actual -> next==NULL){

		return 1;

	}

	else{
/* Cambio los punteros para que apunten al nodo correcto del head, y cambio datos. */
		actual -> next ->  data = new_value;
		actual -> next -> next = NULL; 
		return 0;
	}

}
//---------------------------------------

/* Dicha función intruduce un nuevo elemento al frente de la lista */
int push_front(pos_t** head, int new_value) {


    pos_t * nuevo; //!< Variable pos_t que almacenara tanto el valor como direccion del nuevo item de la lista


/* Damos un espacio de memoria a dicha lista */
    nuevo = malloc(sizeof(pos_t));

/* En caso de que no haya espacio, se devuelve un uno. */
	if (nuevo==NULL){
		
		return 1;


	}
	else{
/* Cambio los punteros para que apunten al nodo correcto del head, y cambio datos. */
	nuevo->data = new_value;
	nuevo->next = *head;
	*head = nuevo;
	return 0;
	}
}

//----------------------------------------

int pop_back(pos_t* head){

/* Se debe considerar si hay un solo elemento en la lista */
int a; //!< Variable local para guardar el valor actual
	if(head->next==NULL){ 
	a = head->data;
	head-> data=0;
	free(head);
	return a;
	}

pos_t* actual= head; //!< Variable tipo puntero local para apuntar al elemento actual

/* Se va a la última posición */

	while (actual-> next -> next != NULL){ 
		actual= actual->next; //Apuntamos a la última dirección
	}
/* Se guarda el dato en a, y se resetea el dato en cero, para luego liberar la memoria*/
a = actual-> next -> data;
actual -> next -> data=0;
free(actual -> next);
actual -> next =NULL;

return a;


}

//--------------------------------------------
/* Dicha función remueve el primer elemento de la lista, recibiendo como parametro el puntero al puntero*/
int pop_front(pos_t** head){

int a=0; //!< Variable local para almacenar el valor que se está borrando

pos_t* nodoSiguiente= NULL; //!< Variable tipo puntero local para apuntar al siguiente nodo
/* Salvamos la posici[on del nodo siguiente, que ha a ser nuestro nuevo head*/

/* El asterisco porque debemos acceder al dato que apunta el head, y no direccion*/
nodoSiguiente= (*head)-> next;
a= (*head)->data;
free(*head);
*head = nodoSiguiente;

return a;


}

//------------------------------------------------

int insertElement(pos_t** head, int pos, int new_value){

pos_t * nuevo; //!< Variable tipo puntero pos_t que almacenara tanto el valor como direccion del nuevo item de la lista


/* Damos un espacio de memoria a dicha lista */
    nuevo = malloc(sizeof(pos_t));

	if (nuevo==NULL){
		
		return 1;

	}

	else{

pos_t* actual1=*head; //!< Variable tipo puntero local para apuntar al antes del que queremos modificar

/* Accedemos a una posicion antes del que queremos modificar */

for (int i=1; i<pos-1; i++){

actual1= actual1-> next; 

}

/* Apuntamos al nodo siguiente del que queremos modificar */
pos_t* actual2=*head;//!< Variable tipo puntero pos_t que almacenara el valor del nodo que estamos poniendo.

actual2= actual1-> next;

actual1->next = nuevo;

nuevo -> next=actual2;

/* Modificamos el nuevo valor */
nuevo->data = new_value;
	return 0;
	}
}

//------------------------------------------------------

int removeElement(pos_t** head, int pos){

pos_t* previo=*head; //!< Variable tipo puntero pos_t que almacenara el valor del nodo anterior al que estamos poniendo.
pos_t* eliminado=*head;//!< Variable tipo puntero pos_t que almacenara el valor del nodo que estamos eliminando.
pos_t* posterior=*head; //!< Variable tipo puntero pos_t que almacenara el valor del nodo posterior que estamos poniendo.



/* Accedemos a una posicion antes del que queremos modificar */

for (int i=1; i<pos-1; i++){

previo= previo-> next;

}

for (int i=1; i<pos; i++){

eliminado= eliminado-> next;

}

for (int i=1; i<pos; i++){

posterior= posterior-> next;

}

/* Apuntamos al nodo siguiente del que queremos modificar */
int a;
previo -> next = posterior->next;
a=eliminado -> data;
/* Liberamos el espacio de memoria del nodo que estamos eliminando */
eliminado -> data=0;
free(eliminado);
return a;

}

//----------------------------------------------------


int freeList(pos_t* head){


pos_t* temporal;

/* Se salva la variable actual en un temporal y se pasa el head al nodo que sigue, para poder eliminar de manera segura el nodo */

while (head!=NULL){

temporal= head;
head -> data=0;
head = head->next;
free(temporal);

}

/* Si se libero bien, si se llama a la funcion printList deberia de dar numeros extraños*/

}

//-------------------------------------------------------

/*Esto da como resultado la impresión  en consola un numero entero seguido de un
espacio, con cambios de linea. */

int printElement(const int value){

printf("%d ", value);

return 0; 

}
//-------------------------------------------------------

/* Esta funcion ordena la lista enlazada de manera ascendente o descendente, según el argumento que se le pase, utlizando el algoritmo de Bubble Sort, adaptado de otros laboratorios para este proyecto*/
void sort(pos_t* head, const char dir){


if(dir=='a'){

int cambio, i;

pos_t* p; //!< Variable tipo puntero pos_t que almacenara el valor del for externo
pos_t* last=NULL; //!< Variable tipo puntero pos_t que almacenara el valor del del for interno

   if (p == NULL)
        return;
 
    do
    {
        cambio = 0;
        p = head;
 
        while (p->next != last)
        {
            if (p->data > p->next->data)
            { 
                int temp = p->data;
    		p->data = p->next->data;
   		p->next->data = temp;
                cambio = 1;
            }
            p = p->next;
        }
        last = p;
    }
    while (cambio);
	return; 
}

/* Caso descendiente*/
if(dir=='d'){

int cambio, i;

pos_t* p;
pos_t* last=NULL;

   if (p == NULL)
        return;
 
    do
    {
        cambio = 0;
        p = head;
 
        while (p->next != last)
        {
            if (p->data < p->next->data)
            { 
                int temp = p->data;
    		p->data = p->next->data;
   		p->next->data = temp;
                cambio = 1;
            }
            p = p->next;
        }
        last = p;
    }
    while (cambio);
	return;
}


}


//-----------------------------------
/* Esta función devuelve el elemento en una posición deseada*/
int getElement(pos_t* head, int index, int* value){ //AGREGAR EL POINTER AL VALUE * QUE DICE QUE NO ENTENDI

pos_t* actual1= head; 

int contador =0;
while (actual1 != NULL){
contador ++;
actual1= actual1->next; /* Así se pasa al siguiente nodo */
}

/* Decimos si el valor que se retorna es incorrecto porque contador > index */
if(contador<index){
*value=1;
return 0;
}

pos_t* actual=head; //!< Variable tipo puntero pos_t que apunta al head
int valor; //!< Variable tipo entero que almacena el valor del elemento apuntado

for (int i=1; i<index; i++){

actual= actual-> next;

}

valor = actual -> data; 
*value=0;
return valor; 



}

//---------------------------
/* Esta funcion lee desde un archivo binario numeros enteros */
pos_t* readList(const char* filePath){
/* Creamos la variable FILE para el archivo */
	FILE *binario;
	int aux=0, cantidad,i , *buffer;
size_t info;
	long tamano;
	/* Alocamos memoria para el primer elemento */
	pos_t *p_first=calloc(1,sizeof(pos_t));
/* Abrimos el archivo. Vemos el tamaño del mismo para ver cuántas iteraciones necesitamos */
	binario=fopen(filePath, "rb");
	fseek(binario, 0 , SEEK_END);
	tamano=ftell(binario);
	cantidad=tamano/sizeof(int);
	rewind(binario);

	buffer=calloc(cantidad,sizeof(int));
	info=fread(buffer, sizeof(int), cantidad, binario);

/* Iteramos sobre la lista de numeros */
   for(i=0; i<cantidad; i++){
    		switch(aux){
    		case 0: /* creamos la lista y agregamos el primer elemento */
    			*p_first=*createList(buffer[i]);
    			aux=1;
    			break;
    		case 1: /* Hacemos push back al resto de los elementos. Si hay error, lo imprime */
    			if(push_back(p_first, buffer[i])==1){
    				printf("No hay memoria suficiente");
    				exit(1);
    			}
    			break;
    	}
    }
/* Cerramos el archivo y retornamos el puntero al primer elemento de la lista creada */
    fclose(binario);
	return p_first;
}

//-------------------------------------------------------------
void writeList(pos_t* head, const char* filePath){
/* Abrimos el archivo.  */
	FILE *archivo;
	char num[10]={0};
	int n;
	archivo=fopen(filePath,"a");
/* Iteramos sobre la lista y escribimos cada linea en el archivo de texto.  */
	do{
		n=(*head).data;
		sprintf(num,"%d\n",n);
		fprintf(archivo, num);
		head=(*head).next;
	}
	while(head!=NULL);
	fclose(archivo);
}

