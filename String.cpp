#include <iostream>
#include <cstdlib>
#include "String.hpp"
using namespace std;


int String::buscarSubcadena(const char* subcadena) {
    char* cadena = this->Texto->ConvertirAEstatico();  // Convertir la lista a una cadena de caracteres
    char* pos = strstr(cadena, subcadena);

    delete[] cadena; // Liberar memoria dinámica

    if (pos != nullptr) {
        // Si se encuentra la subcadena, devolver la posición inicial
        return pos - cadena;
    } else {
        // Si no se encuentra, devolver -1
        return -1;
    }
}


int main () {
  

  // Prueba de buscarSubCadena
  cout << "\n--Pruebas buscarSubCadena(char*)--\n";
  char subCadena[] = "Datos";
  int posicion = p2->buscarSubcadena(subCadena);
  if (posicion != -1) {
    cout << "Subcadena \"" << subCadena << "\" encontrada en la posición: " << posicion << endl;
  } else {
    cout << "Subcadena \"" << subCadena << "\" no encontrada." << endl;
  }

  
}
