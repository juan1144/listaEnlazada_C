/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */

#include <stdio.h>
#include <stdlib.h>
#include "listaEnlazada.h"

NODO *CrearNodo(int dato) {
    NODO *nuevo = NULL;

    nuevo = (NODO *) malloc(sizeof (NODO));

    if (nuevo != NULL) {
        nuevo->dato = dato;
        nuevo->siguiente = NULL;
    }
    return nuevo;
}

int InsertarInicio(NODO **cabeza, int dato) {
    NODO *nuevo = NULL;

    nuevo = CrearNodo(dato);

    if (nuevo != NULL) {
        nuevo->siguiente = *cabeza;
        *cabeza = nuevo;
        return 1;
    }
    return 0;
}

void ImprimirLista(NODO *cabeza) {
    NODO *nAux = cabeza;

    while (nAux != NULL) {
        printf("%d \n", nAux->dato);
        nAux = nAux->siguiente;
    }
}

int InsertarFinal(NODO **cabeza, int dato) {
    NODO *nuevo = NULL, *nAux = *cabeza;

    nuevo = CrearNodo(dato);
    if (nuevo != NULL) {
        while (nAux->siguiente != NULL) {
            nAux = nAux->siguiente;
        }
        nAux->siguiente = nuevo;
        return 1;
    }
    return 0;
}

int EstaVacia(NODO *cabeza) {
    if (cabeza = NULL) {
        return 1;
    } else {
        return 0;
    }
}

int ExisteElemento(NODO *cabeza, int dato) {
    NODO *nAux = cabeza;

    while (nAux != NULL) {
        if (nAux->dato == dato) {
            return 1;
        }
        nAux = nAux->siguiente;
    }
    return 0;
}
