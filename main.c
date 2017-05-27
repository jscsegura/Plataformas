
#include"lista.h"


int main(){

pos_t* a=createList(6);
printList(a);	

pos_t** ptr=&a; 

push_front(ptr,3);
push_back(a,4);
insertElement(ptr, 2,95);

printf("\n");
printList(a);	

sort(a, 'a');

printf("\n");
printList(a);

printf("\n");

int removed=pop_back(a);
int removed1= pop_front(ptr);

printf("El numero que se sacó al frente fue %d\n", removed1);
printf("El numero que se sacó al final fue %d\n", removed);

printf("\n");
printList(a);

printf("\n");
int b=removeElement(ptr,2);
printf("Se ha eliminado %d\n", b);

printf("\n");
printList(a);


printf("\n");

freeList(a);
printList(a);




//push_back(a,4); 


//pos_t** ptr=&a;
//push_front(ptr,3);



//printf("\n");

//insertElement(ptr, 2,95);
//insertElement(ptr, 2,32);
//insertElement(ptr, 2,56);

//printList(a);


//sort(a, 'e');

//printf("\n");


//printList(a);
//int b=removeElement(ptr,2);

//printf("\n");

//printList(a);
//printf("Se ha eliminado %d\n", b);


//freeList(a);
//printList(a);

//printElement(4);
//printElement(5);

//int removed=pop_back(a);


//printList(a);

//printf("El numero que se sacó fue %d\n", removed);

//removed= pop_front(ptr);

//printf("El numero que se sacó fue %d\n", removed);
return 0;
}
