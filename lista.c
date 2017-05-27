#include"lista.h"

pos_t* createList(int first_value){

pos_t* head = NULL;
head = malloc(sizeof(pos_t));

head->data = first_value;
head-> next = NULL;

return head;

}
//--------------------------------------
void printList(pos_t* head){


/* Dicha función itera sobre toda la lista e imprime la misma en orden */
pos_t* actual= head;

while (actual != NULL){
printf("%d\n", actual-> data);
actual= actual->next;
}

}
//----------------------------------------

/* Dicha función intruduce un nuevo elemento al final de la lista */
int push_back(pos_t* head, int new_value){


pos_t* actual= head; //!< Variable local para apuntar al primer elemento



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

pos_t* actual= head;

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

int a=0;

pos_t* nodoSiguiente= NULL;
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

pos_t * nuevo; //!< Variable pos_t que almacenara tanto el valor como direccion del nuevo item de la lista


/* Damos un espacio de memoria a dicha lista */
    nuevo = malloc(sizeof(pos_t));

	if (nuevo==NULL){
		
		return 1;

	}

	else{

pos_t* actual1=*head;

/* Accedemos a una posicion antes del que queremos modificar */

for (int i=1; i<pos-1; i++){

actual1= actual1-> next;

}

/* Apuntamos al nodo siguiente del que queremos modificar */
pos_t* actual2=*head;

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

pos_t* previo=*head;
pos_t* eliminado=*head;
pos_t* posterior=*head;



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

/*Esto da como resultado */

int printElement(const int value){

printf("%d ", value);

return 0; 

}
//-------------------------------------------------------

void sort(pos_t* head, const char dir){


if(dir=='a'){

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

//-------------------------------


pos_t* readList(const char* filePath){



FILE *binario= fopen(filePath, "rb");
int x; 
int cont=0; 

pos_t* a=NULL; 


while (binario!=NULL){

	if (cont=0){

fread(&x, sizeof(x), 1, binario); 

a= createList(x);

cont=1; 

	}

	else{

fread(&x, sizeof(x), 1, binario); 
push_back(a,x);

		}
}

return a; 

}

//-----------------------------------

int getElement(pos_t* head, int index, int* valid){

pos_t* actual=head; 
int valor; 

for (int i=1; i<index; i++){

actual= actual-> next;

}

valor = actual -> data; 

return valor; 



}

