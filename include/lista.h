/** @file lista.h
 *  @brief ...
 *
 *  @details ....
 */

#ifndef LISTA_HPP
#define LISTA_HPP

#include <stdio.h>
#include <stdlib.h>

typedef struct pos {
// data
int data; //**< Entero a almacenar */
// pointer to next element
struct pos* next; //**< Puntero al siguiente nodo */
} pos_t;

/**
 *  @brief Crea la lista y asigna el primer elemento. 
 *  @details Esta funcion regresa un puntero a una variable del tipo pos t y recibe el entero que
se va a almacenar en la primera posici´on de la lista.
 *  @param Primer valor de la lista. 
 *  @return Puntero a la cabeza de la lista.
 **/
pos_t* createList(int first_value); //READY

/**
 *  @brief Lee de archivo binario. 
 *  @details Esta funcion regresa el puntero al primer elemento de la lista creada a partir del archivo
binario ubicado en la ruta especificado por el parametro filePath. 
 *  @param Ruta del binario
 *  @return Pos_t de primer elemento. 
 **/

pos_t* readList(const char* filePath);

/**
 *  @brief Escribe lista a .txt
 *  @details Esta funcion escribe una lista en un archivo de texto plano.
 *  @param Cabecera y directorio del nuevo archivo. 
 **/
void writeList(pos_t* head, const char* filePath);

/**
 *  @brief Inserta elemento al fondo. 
 *  @details Inserta elemento al final de la lista. 
 *  @param Puntero a la cabezera de la lista y valor nuevo 
 *  @return Regresa un entero que es 0 en caso de que el elemento se haya podido
añadir correctamente al final de la lista, o bien, 1 si no se pudo reservar memoria para el nuevo elemento
de la lista.
 **/
int push_back(pos_t* head, int new_value);//LISTO

/**
 *  @brief Inserta elemento al principio. 
 *  @details Inserta elemento al principio de la lista. 
 *  @param Puntero del puntero a la cabezera de la lista y valor nuevo 
 *  @return Regresa un entero que es 0 en caso de que el elemento se haya podido
añadir correctamente al final de la lista, o bien, 1 si no se pudo reservar memoria para el nuevo elemento
de la lista.
 **/
int push_front(pos_t** head, int new_value); //LISTO

/**
 *  @brief Quita el primer elemento de la lista. 
 *  @details  esta funcion elimina la primera posicion de la lista y ademas regresa el valor entero
que estaba almacenado en dicha posicion
 *  @param puntero a la cabeza
 *  @return Devuelve el entero elminado
 **/
int pop_back(pos_t* head);//LISTO

/**
 *  @brief Quita el primer elemento de la lista. 
 *  @details  esta funcion elimina la primera posicion de la lista y ademas regresa el valor entero
que estaba almacenado en dicha posicion
 *  @param puntero a la cabeza
 *  @return Devuelve el entero elminado
 **/
int pop_front(pos_t** head);//LISTO

/**
 *  @brief Agrega elemento a la lista
 *  @details esta función agrega un elemento a la lista.
 *  @param puntnero del puntero de la cabeza de la lista, la posición y el valor
 *  @return Regresa 0 en caso de haber agregado correctamente el elemento, o 1 en
caso de no poder localizar la memoria necesaria
 **/
int insertElement(pos_t** head, int pos, int new_value); //LISTO

/**
 *  @brief Elimina elemento a la lista
 *  @details esta función elimina un elemento a la lista.
 *  @param puntnero del puntero de la cabeza de la lista, la posición y el valor
 *  @return Regresa 0 en caso de haber agregado correctamente el elemento, o 1 en
caso de no poder localizar la memoria necesaria
 **/
int removeElement(pos_t** head, int pos); //LISTO


/**
 *  @brief Libera memoria. 
 *  @details esta función se encarga de liberar toda la memoria que haya sido localizada para la
lista.
 *  @param Puntero al inicio de la lista
 **/
int freeList(pos_t* head); //LISTO

/**
 *  @brief Regresa valor de index.
 *  @details esta función se encarga de regresar el valor de un elemento espec´ıfico de la lista.
 *  @param puntero, index y puntero a variable de control. 
 *  @return ...
 **/
int getElement(pos_t* head, int index, int* value); //LISTO pero le falta el *valor que NO SE PARA QUE ES!!!

/**
 *  @brief Imprime elemento. 
 *  @details Imprime un elemento entero seguido de un espacio con cambios de línea. 
 *  @param valor 
 **/
int printElement(const int value); //LISTO

/**
 *  @brief Ordena lista. 
 *  @details esta funcion se encarga de ordenar la lista. Lo realiza de manera ascendente si el char
recibido como parametro es ’a’, o de manera descendente en caso de que el char recibido sea ’d’. Deja la
lista intacta en caso de recibir cualquier otra letra.
 *  @param puntero a cabecera de lista y char de modo
 **/
void sort(pos_t* head, char dir); //LISTO

/**
 *  @brief Imprime
 *  @details esta función se encarga de imprimir toda la lista seguida de cambios de l´ınea
 *  @param Cabecera de la lista
 **/
void printList(pos_t* head); //READY

#endif
