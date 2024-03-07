#include <iostream>
using namespace std;


int main(){

class Persona
{
private:
 //Declaración de Atributos->
string tipoDoc;
int documento;
string nombre;
string apellido;
int peso; //Peso en KG.
float estatura; //Estatura en Metros.
int edad;
string sexo;


// 
//Constructor vacio
Persona()
{

}
//
/*Crear Constructor con parametros
Persona(string tipoDoc1,string nombre1,string apellido1,int peso1,double estatura1,int edad1,string sexo1){
tipoDoc1=tipoDoc;
nombre1=nombre;
apellido1=apellido;
peso1=peso;
estatura1=estatura;
edad10=edad;
sexo1=sexo;

}
*/
//Metodos Propios de la Clase->
Persona person1();
void pedirDatos(){
cout<<"Ingrese su tipo de documento: ";
cin>>tipoDoc;
cout<<"Ingrese su Nombre: ";
cin>>nombre;
cout<<"Ingrese su peso: ";
cin>>peso;
cout<<"Ingrese su estatura: ";
cin>>estatura;
cout<<"Ingrese su edad: ";
cin>>edad;
cout<<"Ingrese su sexo: ";
cin>>sexo;
}
void mostrarPersona()
{
    cout << "Tipo documento: " << tipoDoc << endl;
    cout << "Documento: " << documento << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Apellido: " << apellido << endl;
    cout << "Peso: " << peso << endl;
    cout << "Estatura: " << estatura << endl;
    cout << "Edad: " << edad << endl;
    cout << "Sexo: " << sexo << endl;
}
void calcularImc(){

float pesoActual=(pesoActual=peso/(estatura*estatura));

if (pesoActual < 20)
    {
        cout << "El peso esta por debajo de lo ideal" << endl;
    }
    else if (pesoActual >= 20 && pesoActual <= 25)
    {
        cout << "El peso es ideal" << endl;
    }
    else
    {
        cout << "Tiene sobrepeso" << endl;
    }


}





};


















return 0;
   
}