#include <iostream>
#include <list>
#include <string>
using namespace std;

struct Cancion {
    string titulo;
    string artista;
};

class ListaReproduccion {
private:
    list<Cancion> canciones;

public:
    void agregarCancion(const Cancion& cancion) {
        canciones.push_back(cancion);
    }

    void eliminarCancion(const string& titulo) {
        for (auto it = canciones.begin(); it != canciones.end(); ++it) {
            if (it->titulo == titulo) {
                canciones.erase(it);
                cout << "Canción eliminada correctamente." << endl;
                return;
            }
        }
        cout << "Canción no encontrada en la lista de reproducción." << endl;
    }

    void mostrarListaReproduccion() const {
        if (canciones.empty()) {
            cout << "La lista de reproducción está vacía." << endl;
            return;
        }
        for (const Cancion& cancion : canciones) {
            cout << "- " << cancion.titulo << " - " << cancion.artista << endl;
        }
    }
};

int main() {
    ListaReproduccion listaGeneral;
    ListaReproduccion miLista;
    ListaReproduccion listaCarlos;
    ListaReproduccion listaCompartida;

    listaGeneral.agregarCancion({"Bohemian Rhapsody", "Queen"});
    listaGeneral.agregarCancion({"Imagine", "John Lennon"});
    listaGeneral.agregarCancion({"Hu Hu Hu", "Natalia Lafourcade"});
    listaGeneral.agregarCancion({"Soy rebelde", "Jeanete"});
    listaGeneral.agregarCancion({"Fatalidad", "Julio Jaramillo"});
    listaGeneral.agregarCancion({"Latinoamérica", "Calle 13"});
    listaGeneral.agregarCancion({"La Vida es un Carnaval", "Celia Cruz"});
    listaGeneral.agregarCancion({"Querida", "Juan Gabriel"});
    listaGeneral.agregarCancion({"Chan Chan", "Buena Vista Social Club"});
    listaGeneral.agregarCancion({"Livin' La Vida Loca", "Ricky Martin"});

    int opcion;
    string tituloCancion;

    while (true) {
        cout << "Menú Spotify" << endl;
        cout << "1. Agregar canción a mi lista" << endl;
        cout << "2. Eliminar canción de mi lista" << endl;
        cout << "3. Mostrar mi lista" << endl;
        cout << "4. Agregar canción a la lista de Carlos" << endl;
        cout << "5. Eliminar canción de la lista de Carlos" << endl;
        cout << "6. Mostrar la lista de Carlos" << endl;
        cout << "7. Agregar canción a la lista compartida (de la lista general)" << endl;
        cout << "8. Mostrar lista de reproducción compartida" << endl;
        cout << "9. Salir" << endl;
        cout << "Ingrese su opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese el título de la canción para agregar a Mi lista: ";
                cin.ignore(); // Consumir el caracter de nueva línea de la entrada anterior
                getline(cin, tituloCancion);
                Cancion cancionAgregar = {tituloCancion, ""};
                miLista.agregarCancion(cancionAgregar);
                break;
            case 2:
                cout << "Ingrese el título de la canción para eliminar de Mi lista: ";
                cin.ignore();
                getline(cin, tituloCancion);
                miLista.eliminarCancion(tituloCancion);
                break;
            case 3:
                cout << "\n** Mi lista **\n";
                miLista.mostrarListaReproduccion();
                break;
            case 4:
                cout << "Ingrese el título de la canción para agregar a la lista de Carlos: ";
                cin.ignore();
                getline(cin, tituloCancion);
                Cancion cancionAgregarCarlos = {tituloCancion, ""};
                listaCarlos.agregarCancion(cancionAgregarCarlos);
                break;
            case 5:
                cout << "Ingrese el título de la canción para eliminar de la lista de Carlos: ";
                cin.ignore();
                getline(cin, tituloCancion);
                listaCarlos.eliminarCancion(tituloCancion);
                break;
            case 6:
                cout << "\n** Lista de Carlos **\n";
                listaCarlos.mostrarListaReproduccion();
                break;
            case 7:
                cout << "Ingrese el título de la canción para agregar a la lista compartida: ";
                cin.ignore();
                getline(cin, tituloCancion);
                for (const Cancion& cancion : listaGeneral.canciones) {
                    if (cancion.titulo == tituloCancion) {
                        listaCompartida.agregarCancion(cancion);
                        cout << "Canción agregada correctamente." << endl;
                        break;
                    }
                }
                break;
            case 8:
                cout << "\n** Lista compartida **\n";
                listaCompartida.mostrarListaReproduccion();
                break;
            case 9:
                cout << "¡Hasta luego!" << endl;
                return 0;
            default:
                cout << "Opción no válida. Inténtelo de nuevo." << endl;
        }
    }

    return 0;
}
