
#include"lista.h"


int main(){

pos_t* a=createList(8);
push_back(a,4); 


pos_t** ptr=&a;
push_front(ptr,3);

printList(a);


int removed=pop_back(a);


printList(a);

printf("El numero que se sacó fue %d\n", removed);


return 0;
}
