#ifndef CONTENEDOR_H
#define CONTENEDOR_H

#include "persona.h"

class contenedor{

    public:
        contenedor();
        bool agregar(persona *);
        persona *getPersona(string);
        string toString();
        ~contenedor();

    protected:

    private:
        persona *con[20];
        int can;
        int tam;
};

#endif // CONTENEDOR_H
