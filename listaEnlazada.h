/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.h to edit this template
 */

/* 
 * File:   listaEnlazada.h
 * Author: juan
 *
 * Created on 7 de octubre de 2021, 13:15
 */

#ifndef LISTAENLAZADA_H
#define LISTAENLAZADA_H

#include <stdio.h>
#include <stdlib.h>

//Estructuras

typedef struct nodo {
    int dato;
    struct nodo *siguiente;
} NODO;

//funciones
NODO *CrearNodo(int dato);
int InsertarInicio(NODO **cabeza, int dato);
int InsertarFinal(NODO **cabeza, int dato);
void ImprimirLista(NODO *cabeza);
int EstaVacia(NODO *cabeza);
int ExisteElemento(NODO *cabeza, int dato);

#endif /* LISTAENLAZADA_H */

