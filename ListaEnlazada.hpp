#ifndef LISTA_ENLAZADA_HPP
#define LISTA_ENLAZADA_HPP
#include "nodo.hpp"
#include <iostream>
using namespace std;
template<typename T>

class ListaEnlazada {
private:
  Nodo<T> *apPrimero;
  Nodo<T> *apUltimo;
  int cantidad;
public:
     ListaEnlazada() 
    {
        apPrimero = nullptr;
        apUltimo = nullptr;
        cantidad = 0;
    }
    ~ListaEnlazada() 
    {
        for (int i = 0; i < cantidad; i++) {
        delete this->obtener(i);
        }
        apPrimero = nullptr;
        apUltimo = nullptr;
    }
   

    int largo_lista()
    {
        
        return cantidad;
    }
    int largo_lista2()
    {
        std::cout <<"La cantidad de caracteres es de: "<< cantidad  << std::endl;
        return cantidad;
    }

  void eliminar(int indice) {
    if (indice < 0 || indice >= cantidad) {
        std::cout << "Indice fuera de rango  o no pertecene" << std::endl;
    }
    Nodo<T> *nodoAEliminar = obtener(indice);

    if (nodoAEliminar->obtenerAnterior() != nullptr) {
       
        nodoAEliminar->obtenerAnterior()->establecerSiguiente(nodoAEliminar->obtenerSiguiente()); 
    } else { 
        apPrimero = nodoAEliminar->obtenerSiguiente();
    }

    if (nodoAEliminar->obtenerSiguiente() != nullptr) {
        nodoAEliminar->obtenerSiguiente()->establecerAnterior(nodoAEliminar->obtenerAnterior());
    } else {
        apUltimo = nodoAEliminar->obtenerAnterior();
    }
    cantidad--;
    }

    void insertar(T dato)
    {
        Nodo<T> *nuevoNodo = new Nodo<T>(dato);
        if (apUltimo == nullptr) 
        {
            apPrimero = nuevoNodo;
            apUltimo = nuevoNodo;
        }
        else
        {
            apUltimo->establecerSiguiente(nuevoNodo);
            apUltimo = nuevoNodo;
        }
        cantidad++;
    }
    Nodo<T>* obtener(int indice) 
    {
        Nodo<T> *nodo = apPrimero;
        while (indice != 0 && nodo != nullptr) 
        {
         nodo = nodo->obtenerSiguiente();
         indice--;
        }

    return nodo;
    }

    void modificar(T dato, int indice) 
    {
        this->obtener(indice)->establecerDato(dato);
    }
    T* ConvertirAEstatico()
    {
        T* listaEstatica = new T[cantidad+1];
        for (int i =0; i< cantidad;i++)
        {
            listaEstatica[i] = this->obtener(i)->obtenerDato();
        }
        listaEstatica[cantidad] = 0;

        for (int j = 0; j<cantidad;j++)
        {
            cout << listaEstatica[j];
        }
        return listaEstatica; 
    }
};
#endif