#include <iostream>
#include <fstream>
using namespace std;
string definicion( const string palabra, string path){
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

int main() {
    string word,resultado, link="diccionario.txt";
    cout << "Ingrese palabra a buscar" << endl;
    getline(cin,word);
    resultado= definicion(word,link);
    cout<<resultado;
    return 0;
}
