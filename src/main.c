
#include"lista.h"


int main(){

pos_t* a=createList(6);
printList(a);	

pos_t** ptr=&a; 

push_front(ptr,3);
push_back(a,4);
insertElement(ptr, 2,95);
insertElement(ptr, 3,23);

printf("Se ha insertado al frente un 3, un 4 por atrás y un 95 en la segunda posicion");

printf("\n");
printList(a);

int k; 
int* ptrk=&k;
printf("\n");
int i= getElement(a, 89,ptrk);
printf("El numero obtenido con getElement en la posición tres es %d\n", i);
printf("La variable value tiene el valor %d\n", k);

i= getElement(a,2,ptrk);
printf("El numero obtenido con getElement en la posición tres es %d\n", i);
printf("La variable value tiene el valor %d\n", k);


printf("\n");
sort(a, 'a');

printf("Se ha ordenado la lista de forma ascendente");
printf("\n");
printList(a);

sort(a, 'd');
printf("Se ha ordenado la lista de forma descendente");
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



pos_t* p= readList("./build/datos.bin"); 
printf("\n");
//printList(p);
writeList(a, "./build/archivotexto.txt");



return 0;
}
