#include <iostream>
#include "Persona.c++"
using namespace std;


class Empleado : public Persona
{
private:
    string cargo;
    float valorHora;
    float horasTrabajadas;
    string departamento;
   
public:
    // Constructor
    Empleado() {}

    void pedirDatos() {
        cout << "Ingrese su Cargo: ";
        cin >> cargo;
        cout << "Ingrese el valor de su hora laboral: ";
        cin >> valorHora;
        cout << "Ingrese su cantidad de horas trabajadas: ";
        cin >> horasTrabajadas;
        cout << "Ingrese el departamento al que pertenece: ";
        cin >> departamento;
        Persona::pedirDatos(); 
    }

    float calcularHonorarios() {
        float honorario = (valorHora * horasTrabajadas) - (((valorHora * horasTrabajadas) * 0.966) / 100);
        return honorario;
    }

    void mostrarPersona() {
        cout << "Tipo documento: " << tipoDoc << endl;
        cout << "Documento: " << documento << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Apellido: " << apellido << endl;
        cout << "Cargo: " << cargo << endl;
        cout << "Valor Hora: " << valorHora << endl;
        cout << "Horas Trabajadas: " << horasTrabajadas << endl;
        cout << "Departamento: " << departamento << endl;
        cout << "Valor a pagar: " << calcularHonorarios() << endl;
    }
};

int main() {
    Empleado empleado;
    empleado.pedirDatos();
    empleado.mostrarPersona();

    return 0;
}