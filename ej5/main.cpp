#include <iostream>
#include <fstream>
using namespace std;

struct persona{
    int orden=0;
    int anio=0;
    string nombre ="";
};

int main() {
    int contador=0;
    persona aux;
    ifstream dato;
    dato.open("datos.txt");
    if(dato.fail()){
        cout<<"error";
        return 1;
    }
    while(!dato.eof()){
        dato>>aux.orden;
        dato>>aux.anio;
        dato>>aux.nombre;
        if(aux.anio<1995){
            contador++;
        }
        dato.ignore();
    }
    dato.close();
    cout << contador<<" alumnos nacieron antes del año 1995" << endl;
    return 0;
}
