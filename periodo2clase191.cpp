#include <iostream>
#include <string>
using namespace std; 

int main()
{
	string titulos[5];
	string autores[5];
	cout << "por favor ingrese la siguiente informacion de los Libros: \n";
	for(int i = 0; i <5; i++)
	{
		cout << "\n******* Libro" << i + 1 << "********:\n";
		cout << "Titulo:";
		//cin >> titulos[i]; //no funciona con espacios
		getline(cin; titulos[i]);
		cout << "Autor: ";
		//cin >> autores[i]; //No funciona con espacios
		getline(cin, autores[i]);
	}
}

