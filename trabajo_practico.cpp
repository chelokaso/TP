#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char *argv[]) {
    ///ACTIVIDAD 1
    /*int contador = 0;
    string linea;
    ifstream archivo;
    archivo.open("actividad_1.txt");
    if (archivo.fail()){
        cout<<"el archivo fallo";
    } else {
        while (getline(archivo, linea)) {
        contador++;
    }
    }
    archivo.close();
    cout<<"el archivo tiene: "<<contador<<" lineas";*/


    ///ACTIVIDAD 2
    /*char caracter;
    int contador;
    string linea;
    cout << "Ingrese el caracter que desea buscar: ";
    cin >> caracter;
    ifstream archivo("actividad_1.txt");
    if (archivo.fail()) {
        cout << "No se pudo abrir el archivo" << endl;
        return 1;
    }
    while (getline(archivo, linea)) {
        contador = 0;
        for (char c : linea) {
            if (c == caracter) {
                contador++;
            }
        }
        cout << "Se encontr� el caracter " << caracter << " " << contador << " veces en la l�nea: " << linea << endl;
    }
    archivo.close();*/
    ///ACTIVIDAD 3
    /*

        fstream archivoModificable;
        archivoModificable.open("archivo.txt", ios::in);

        if(archivoModificable.fail()){
            cout<<"No se pudo abrir el archivo."<<endl;
            exit(1);
        }
        else{
            char caracter;
            char contenido[100];
            int i = 0;

            while (archivoModificable.get(caracter)) {
                contenido[i] = caracter;
                if (caracter == '!' || caracter == '.' || caracter == '?') {
                    i++;
                    contenido[i] = '\n';
                }
                i++;
            }
            contenido[i] = '\0';
            archivoModificable.close();

            archivoModificable.open("archivo.txt", ios::out);
            archivoModificable.seekg(0); // vueklvo al principio
            archivoModificable << contenido;
        }
        archivoModificable.close();


     */
    ///ACTIVIDAD 4
    /*char caracter, nuevo_caracter;
    int contador;
    string linea;
    cout << "Ingrese el caracter que desea intercambiar: ";
    cin >> caracter;
    cout << "ingrese el caracter por el que se cambiara: ";
    cin>> nuevo_caracter;
    ifstream archivo("actividad_1.txt");
    if (archivo.fail()) {
        cout << "No se pudo abrir el archivo" << endl;
        return 1;
    }
    while (getline(archivo, linea)) {
        contador = 0;
        while (getline(archivo, linea)) {
            for (size_t i = 0; i < linea.size(); ++i) {
                if (linea[i] == caracter) {
                    linea[i] = nuevo_caracter;
                    contador++;
                }
            }
            cout << linea << endl;
        }
        cout << "se modifico en: "<<contador<<" lineas";
    }
    archivo.close();*/

    ///ACTIVIDAD 5
    /*
    struct persona{
        int orden=0;
        int anio=0;
        string nombre ="";
    };

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

*/

    ///ACTIVIDAD 6
    /*string definicion( const string palabra, string path){
        ifstream archivo;
        string cadena;
        int tamanio=palabra.length();
        archivo.open(path);
        while(!archivo.eof()){
            getline(archivo,cadena);
            if(cadena.find(palabra)==0){
                cadena.erase(0,tamanio+1);
                archivo.close();
                return cadena;
            }
        }
        archivo.close();
        cadena="palabra no encontrada";
        return cadena;
    }

        string word,resultado, link="diccionario.txt";
        cout << "Ingrese palabra a buscar" << endl;
        getline(cin,word);
        resultado= definicion(word,link);
        cout<<resultado;

*/
    ///ACTIVIDAD 7
    /*struct persona{
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
    */
    return 0;
}