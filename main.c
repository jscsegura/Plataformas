
#include"lista.h"


int main(){

pos_t* a=createList(8);
push_back(a,4); 


pos_t** ptr=&a;
push_front(ptr,3);

printList(a);


pop_back(a);
printList(a);

return 0;
}
