
#include"lista.h"


int main(){

pos_t* a=createList(8);
push_back(a,4); 


pos_t** ptr=&a;
push_front(ptr,3);



printf("\n");

insertElement(ptr, 2,95);
insertElement(ptr, 2,32);
insertElement(ptr, 2,56);

printList(a);


sort(a, 'a');

printf("\n");


printList(a);
//int b=removeElement(ptr,2);

printf("\n");

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
