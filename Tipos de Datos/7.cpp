#include<iostream>

using namespace std;

int main(){
	//Guardar variables que el usuario digite
	
	//"getline(cin, variable)" se usa para guardar cadena de textos
	//size se usa para saber la cantidad de caractedes que tiene la cadena
	
   string nombre;
   	
   cout << "Escribe tu nombre : ";
   getline(cin, nombre);
   	
   cout << "Hola " << nombre << endl;
   
   int num = nombre.size();
   cout << "Tu nombre tiene " << num << " caracteres" << endl;
	
	return 0;
}
