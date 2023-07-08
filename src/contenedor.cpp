#include "contenedor.h"

//constructor sin parametros
contenedor::contenedor(){
    can= 0;
    tam= 20;
    for(int i=0; i<tam; i++){
        con[i]= NULL;
    }
}

//metodo para agregar persona
bool contenedor::agregar(persona *per){
    if(can<tam){
    con[can++] = per;
    return true;
   }
    return false;
}


//metodo toString
string contenedor::toString(){
   stringstream s;
   for(int i=0; i<can; i++){
   s<<con[i]-> toString()<<endl;
   }
   return s.str();
}

//metodo para que busque la cedula
persona *contenedor::getPersona(string ced){
    persona *aux;
    for(int i=0; i<can; i++){
        if(con[i]-> getCedula()== ced){
            aux= con[i];
        }
    }
    return aux;
}


//metodo destructor
contenedor::~contenedor(){
}
