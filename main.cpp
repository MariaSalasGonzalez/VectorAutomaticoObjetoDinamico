
#include "contenedor.h"

using namespace std;

int main()
{
    contenedor con;
    persona *per1=new persona("Juan" ,"Perez","001");
    con.agregar(per1);
    cout<<con.toString()<<endl;
    return 0;
}
