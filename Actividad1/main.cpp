#include <iostream>

using namespace std;
class paquete{
public:
    int id;
    string destino;
    string origen;
    float peso;

    void imprimePaquete();
};

class Nodo{
    public:
        paquete pack;
        Nodo* sig;
};

class Paqueteria{
private:
    Nodo* ancla;
    Nodo* aux;
    Nodo* ultimo;
    int cont;

public:
    void inicializa();
};

int main()
{
    int opcion;
    cout << "Actividad 1: Paqueteria" << endl;
    do{
        cout<<"Menu de paqueteria"<<endl;
        cout<<"Opcion 1: Agregar paquete"<<endl;
        cout<<"Opcion 2: Eliminar paquete"<<endl;
        cout<<"Opcion 3: Mostrar paquetes"<<endl;
        cout<<"Opcion 4: Guardar paquete"<<endl;
        cout<<"Opcion 5: Recuperar paquete"<<endl;
        cout<<"Opcion 6: Salir"<<endl;
        cin>>opcion;
        cout<<endl;
        switch(opcion){
        case 1:
            break;
        }
    }while(opcion!=6);
    return 0;
}
