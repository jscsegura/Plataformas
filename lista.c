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

pos_t* actual= head;

while (actual != NULL){
printf("%d\n", actual-> data);
actual= actual->next;
}

}
//----------------------------------------

int push_back(pos_t* head, int new_value){

pos_t* actual= head;

while (actual->next != NULL){
actual= actual->next;
}

actual -> next=malloc(sizeof(pos_t));

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

int push_front(pos_t** head, int new_value) {
    pos_t * nuevo;
    nuevo = malloc(sizeof(pos_t));
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

if(head->next==NULL){ //En caso de que haya solo un único elemento



}

}
