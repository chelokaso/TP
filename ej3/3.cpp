#include <iostream>
#include <fstream>

using namespace std;

int main() {
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
	
	return 0;
}
