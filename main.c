/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: juan
 *
 * Created on 7 de octubre de 2021, 13:14
 */

#include <stdio.h>
#include <stdlib.h>
#include "listaEnlazada.h"
/*
 * 
 */
int main(int argc, char** argv) {

    NODO *cabeza = NULL;
    int res;

    InsertarInicio(&cabeza, 5);
    InsertarInicio(&cabeza, 4);
    InsertarFinal(&cabeza, 6);
    InsertarFinal(&cabeza, 7);
    ImprimirLista(cabeza);
    res = ExisteElemento(cabeza, 4);

    if (res == 1) {
        printf("El elemento esta en la lista...\n");
    } else {
        printf("El elemento no esta en la lista...\n");
    }

    return (EXIT_SUCCESS);
}

