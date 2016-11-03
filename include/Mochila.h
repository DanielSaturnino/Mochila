#include "Archivos.h"

class Mochila{

public:
	int Ganancia[10000];
	int Peso[10000];
	int Mochila[1000][1000];
	int MochilaSolucion[1000];
	void ArmaMatriz(int i, int j);
	void Mostrar(int i,int j);
	void Solucion(int i,int j);
};