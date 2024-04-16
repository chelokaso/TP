#include <iostream>
#include <fstream>
using namespace std;
struct persona{
    int orden=0;
    int anio=0;
    string nombre="";
};

void determinar(int &min,int &max,int &cantidad, string path){
    persona aux;
    ifstream archivo;
    archivo.open(path);
    if(archivo.fail()){
        cout<<"error al abrir el archivo";
    }
    while(!archivo.eof()){
        archivo>>aux.orden;
        archivo>>aux.anio;
        if(aux.anio>max){
            max=aux.anio;
        }
        else if(aux.anio<min){
            min=aux.anio;
        }
        getline(archivo,aux.nombre);
        ++cantidad;
    }
    archivo.close();
}
int main() {
    string link="datos.txt";
    int total, minimo,maximo;
    total=maximo=0;
    minimo=9999;
    determinar(minimo,maximo,total,link);
    ifstream file;
    file.open(link);
    if(file.fail()){
        cout<<"error al abrir el archivo";
    }
    persona *personas= new persona[total];
    for(int i=0;i<total;i++){
        file>>personas[i].orden;
        file>>personas[i].anio;
        getline(file,personas[i].nombre);
    }
    for(int i=0;i<total;i++){
       cout<<"  "<<personas[i].orden << " " << personas[i].anio <<" " <<personas[i].nombre <<endl;
    }
    delete[] personas;
    cout<<"la persona mas joven es del año "<<maximo<<" y la persona mas adulta es del año "<<minimo;
    return 0;
}