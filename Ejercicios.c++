#include <iostream>
#include<list>
using namespace std;


int main(){
list<string> Frutas;
Frutas.push_back("Manzana");
Frutas.push_back("Uvas");
Frutas.push_back("Melón");
Frutas.push_back("Fresa");
for (const auto & elemento:Frutas)
{
cout<<elemento<<"";
}
auto it=next(Frutas.begin(),1);
Frutas.insert(it,"Arandanos");
for (const auto & elemento:Frutas)
{
cout<<elemento<<"";
}
Frutas.pop_front();
auto it1=next(Frutas.begin(),2);
Frutas.errase(it1);
Frutas.remove("Uvas");
Frutas.front();
Frutas.back();
auto it2=next(Frutas.begin(),3);
cout<<*it2;
Frutas.at(2);
Frutas.clear();
Frutas.resize(10);
Frutas.empty();
Frutas.size();
Frutas.max_size();
Frutas.min_size();

return 0;

};

//1) Crear listas de reproducción Spotify.
//Algoritmo para tener lista de muchas canciones.
//2) Que el usuario pueda crear su lista propia.
//3) Crear lista enlazada con mi Amigo.
//Lista principal + 2 listas, la tuya y la de tu amigo.