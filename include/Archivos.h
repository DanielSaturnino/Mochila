#include <iostream>
#include <fstream>
#include <cstring>

class Archivos{
public:
	struct Item{
		std::string Heramienta;
		int Peso;
		int Ganancia;
	}Item[100000];
	int NumItem;
	int Leer();
};