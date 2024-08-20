#ifndef NODO_HPP
#define NODO_HPP
template<typename T>
class Nodo {
private:
  T aDato;
  Nodo *apSiguiente;
  Nodo *apAnterior;
public:
  Nodo(T dato) {
    aDato = dato;
    apSiguiente = nullptr; 
    apAnterior = nullptr; 
  }
    T obtenerDato() { return aDato; }

    void establecerDato(T nuevoDato) { aDato = nuevoDato; }

    Nodo* obtenerSiguiente() { return apSiguiente; }

  Nodo* obtenerAnterior() { return apAnterior; }

    void establecerSiguiente(Nodo *pNodo) { apSiguiente = pNodo; }
    
    void establecerAnterior(Nodo *pNodo) { apAnterior = pNodo; }
};
#endif
