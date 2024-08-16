#ifndef String_HPP
#define String_HPP
class String
{
private: 
    const char *cadena;
public:
//Constructor y Destructor
    String(const char*);
    ~String();
//--------------------------------------------------------//
//Metodos
    int verString();
    int len(); //Listo
    void ultimoIndice(char); //
    void cambiarCadena(const char*); //Listo
    void split(char);//Listo
    void concatenarEn(char*,int);
    void buscarSubcadena();
    void concatenarCadenas(char**);
    void reemplazarEn(char*);
    void reemplazarOcurrencias(char* anterior,char*nuevo);
    void tokenizar();
    int frecuenciaCaracteres();
    void reverseString();
    void guardarEnArchivo(char*ruta,char*modo);
    void leerArchivo(char*ruta);
};
#endif