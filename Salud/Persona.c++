#include <iostream>
using namespace std;


int main(){

class Persona
{
public:
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

}
void calcularImc(){

float pesoActual=(pesoActual=peso/(estatura*estatura));



}





};





cout<<mostrarPersona(Persona);













return 0;
   
}