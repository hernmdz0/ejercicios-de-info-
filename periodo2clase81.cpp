#include <iostream>
using namespace std;

string parImpar(int num); //prototipo de funcion 

int main(){
	int numero;
	string cadena; 
	cout << "ingresar el numero: ";
	cin >> numero;
	cadena = parImpar(numero);
	cout << "el numero es: " << cadena;
	return 0;
} 

string parImpar(int num){
	string resultado;
	if (num%2==0){
		resultado = "par";
	} else if (num%2==1){
		resultado = "impar";
	}
	return resultado;
}


