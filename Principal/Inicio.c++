#include <iostream>
#include "../Salud/Persona.c++"
using namespace std;

class Inicio {
public:
    void iniciar();
};

void Inicio::iniciar() {
    Persona person1;
    person1.pedirDatos();
    person1.mostrarPersona();
    person1.calcularImc();
}

int main() {
    Inicio inicio;
    inicio.iniciar();
    return 0;
}


// 1). Leer Herencia encapsulamiento, clases abstractas, interfases, sobecarga "ESTUDIAR". en C++
// 2). Como invocar metodos desde inicio cuando los metodos son privados. (cambiar metodos de public a private).









