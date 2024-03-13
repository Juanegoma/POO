#include <iostream>
#include "../Salud/Persona.c++"
#include "../Salud/Empleado.c++"
using namespace std;


class inicio
{
public:
void user()
{
}
};

void inicio ::user()
{
Empleado user;
user.pedirDatos();
user.mostrarPersona();
};