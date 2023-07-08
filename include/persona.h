#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include<sstream>
#include <string>
#include <cstdlib>

using namespace std;

class persona
{
    public:
        persona(string,string,string);
        persona();

        string getNombre();
        string getApellido();
        string getCedula();

        void setNombre(string);
        void setapellido(string);
        void setCedula(string);
        virtual string toString();
        ~persona();

    private:
        string nombre;
        string apellido;
        string cedula;
};

#endif // PERSONA_H
