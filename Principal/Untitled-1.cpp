#include <iostream>
using namespace std;
template <typename T>

class Nodo
{
private: 
T dato;
Nodo* next;

public:
Nodo(){
next=NULL;
}
Nodo(T d)
{
dato=d;
next=NULL;
}
T get_dato()
return dato;
{
void set_dato(T d){
dato=d;
}
Nodo<T>* get_next(){
return next;
}
void set_next(Nodo<T>* next){
next=n;
}

}
};

template<typename T>
class Listas
{
private:
Nodo<T>*ptr;
int size;

public:
Lista(){
ptr=NULL;
size=0;
}

};


int main(){









}