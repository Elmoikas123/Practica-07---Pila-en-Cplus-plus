// practica 7 pila en cplusplus : Este archivo contiene la función "main". *La ejecución del programa comienza y termina ahí.
//echo por el pijudo chingon de moisex
#include <iostream>
#include<vector>
#include<string>
int main()
{
	const int capacidad = 10;
	std::vector<int> elementos(capacidad);
	int cima = -1;
	std::cout << " Teclea elementode la pila (termina con -1)\n";
	int x = 0;
	const int CLAVE = -1;
	while (x != CLAVE)
	{
		std::string entrada;
		std::cin >> entrada;
		try {
			x = std::stoi(entrada);//convertimos la cadena a entero(tring to int)
			if (cima < capacidad - 1) {
				cima++;
				elementos[cima] = x;
			}
			else {
				std::cout << "pila llena\n";
				break;
			}
		}
		catch (const std::invalid_argument&) {
			std::cout << "entrada no valida\n";
		}

	}
	if (cima >= 0) {
		std::cout << "Elementos de la pila\n";
		while (cima >= 0) {
			x = elementos[cima];
			cima--;
			std::cout << x << " ";
		}
	}
	else {
		std::cout << "pila vacia\n";
	}
	return 0;
}