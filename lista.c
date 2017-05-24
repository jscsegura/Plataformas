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


    pos_t * nuevo;


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

	if(head->next==NULL){ 

	head-> data=0;
	free(head);
	return 0;
	}

pos_t* actual= head;

/* Se va a la última posición */

	while (actual-> next -> next != NULL){ 
		actual= actual->next; //Apuntamos a la última dirección
	}


actual -> next -> data=0;
free(actual -> next);
actual -> next =NULL;

return 0;


}

//--------------------------------------------


