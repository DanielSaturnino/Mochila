#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class Archivos{
public:
	struct Item{
		string Heramienta;
		int Peso;
		int Ganancia;
	}Item[100000];
	int NumItem;

	int Leer();
};