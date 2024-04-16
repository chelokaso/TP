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
		cout << "Se encontró el caracter " << caracter << " " << contador << " veces en la línea: " << linea << endl;
	}
	archivo.close();*/
	///ACTIVIDAD 3
	
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
	return 0;
}

