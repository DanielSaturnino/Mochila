/*
Nombres:Rodrigo Mayett Guzman
		Daniel Manzano Saturnino
Descripicion:
Esta clase archivos lee el archivo de la mochila
para poder dar solucion hacemos uso de las librerias
iostream,fstream y cstring para usar notacion de lenguaje
c 
*/
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