#include<iostream>

using namespace std;

int main(){
	//Declaración de variables que se usan en programación 
	
	int numero=1;              //numero entero del 1 al infinito
	char letra='l';            //letra, puedes escribir una letra o una palabra
	string palabra="perro";    //una palabra o varias palabras 
	bool verdadero=true;     //termino booleano verdadero
	bool falso=false;        //termino booleano falso
	double x = 3.2;            //tiene 15 dígitos decimales de precisión
    float y = 4.8;             //tiene 7  dígitos decimales
    
    /*estructura de la impresión
    cout<<"texto"<<variable<<enld;*/
    cout<<"entero: "<<numero<<endl;
    cout<<"letra: "<<letra<<endl;
    cout<<"palabra: "<<palabra<<endl;
    cout<<"verdadero(booleano): "<<verdadero<<endl;
    cout<<"falso(booleano): "<<falso<<endl;
    cout<<"decimal(64 bits): "<<x<<endl;
    cout<<"decimal(32 bits): "<<y<<endl;
    
	return 0;
}
