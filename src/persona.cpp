
#include "persona.h"


//constructor con parametros
persona::persona(string nom, string ape, string ced){
    nombre = nom;
    apellido = ape;
    cedula = ced;
}

//constructor sin parametros
persona::persona(){
    nombre = " ";
    apellido = " ";
    cedula = " ";
}

//Get
string persona::getNombre(){
    return nombre;
}
string persona::getApellido(){
    return apellido;
}
string persona::getCedula(){
    return cedula;
}


//Set
void persona::setNombre(string nom){
    nombre = nom;
}
void persona::setapellido(string ape){
    apellido = ape;
}
void persona::setCedula(string ce){
    cedula = ce;
}

//metodo toString
string persona::toString(){
stringstream s;
s<<"Nombre:"<<nombre<<endl;
s<<"Apellido:"<<apellido<<endl;
s<<"Cedula:"<<cedula<<endl;
return s.str();
}


//metodo destructor
persona::~persona(){
}






