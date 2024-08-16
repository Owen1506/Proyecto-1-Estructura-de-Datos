#include <iostream>
#include <cstdlib>
#include "String.hpp"
using namespace std;
String::String(const char* cadena):cadena(cadena) {
    cout << cadena <<endl;
}
String::~String(){}
void String::cambiarCadena(const char* nuevaCadena)
{
    cadena = nuevaCadena;
}
int String::verString()
{
    cout << cadena << endl;
    return 0;
}
void String::ultimoIndice(char caracterAbuscar)
{
    int cont = 0;
for (const char* i=cadena; *i != caracterAbuscar; ++i)
    {
        cont +=1;
    }
    cout << "La ultima posicion del caracter dado es: [ " << cont <<  " ]" << endl;
    
}
int String::len()
{
    int cont = 0;
    for (const char* i = cadena; *i != '\0'; ++i)
    {
        cont += 1;
    }
    
    cout << "La cantidad de caracteres en " << cadena << " es de: " << cont << " caracteres incluidos los espacios." << endl;
    return 0;
}
void String::split(char caracter) 
{    
//const char* palabra = "Hola muchachos";
//Cuantos caracteres hay en la cadena
int cont = 0;
int x = 0;
for (const char* i = cadena; *i != '\0'; ++i)
{
    cont += 1;
} 
int contdeCaracter = 0;
//Cuantos caracteres hay en la cadena que no sean la letra del split
for (const char* i = cadena; *i != '\0'; ++i)
{
    if (*i == caracter)
    {
        contdeCaracter += 1;
    }
}

char* resultado = new char[(cont - contdeCaracter)+1];

for (const char*i = cadena; *i != '\0';i++)
{
    if (*i != caracter)
    {
        //cout << *i ;
        resultado[x] = *i;
        x += 1;
    }
}
resultado[x] = '\0'; //Se finaliza la cadena de caracteres con '\0'

// HAcer un for para acomodar las palabras y asi aja si bla bla
cout << "Cadena de caracter implementando el split: "<< resultado <<"" <<  (cont - contdeCaracter)+1 <<"\n";
}   
int main()
{
    String var("Hola Mundo\0");
    var.cambiarCadena("holasmuchachos\0");
    var.verString();
    var.len();
    var.split('h');
}