/*
Nombres:Rodrigo Mayett Guzman
		Daniel Manzano Saturnino
Descripicion:
Esta clase se encarga de realizar los movimientos
y la parte logica del algoritmo de la mochila 
crea los arreglos necesarios y arma la tabla la 
resuelve y muestra la informacion
*/
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