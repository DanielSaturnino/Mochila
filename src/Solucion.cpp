/*
Nombres:Rodrigo Mayett Guzman
		Daniel Manzano Saturnino

*/
#include "Solucion.h"
/*para resolver necesitamos crear dos instancias una de 
la clase archivos y la otra de mochila de esta forma
tenemos acceso a sus metodos y atributos y podemos dar solucion al algoritmo
como se vio en clase*/		
void Solucion::Resuelve(){
	int j,i;
	Archivos a = Archivos();
	Mochila b = Mochila();
	i=a.Leer();
	j=a.NumItem;
	std::cout<<"La matriz es de "<<i<<" por "<<j<<"por lotanto son "<<j-1<<"Items"<<std::endl;

	for(int z=0;z!=j-1;z++){
		b.Ganancia[z]=a.Item[z].Ganancia;
	}for(int z=0;z!=j-1;z++){
		b.Peso[z]=a.Item[z].Peso;
	}
	b.ArmaMatriz(i,j);
	b.Mostrar(i,j);
	b.Solucion(i,j);
	int pes=0;
	std::cout<<"Lista de Items opttimos "<<std::endl;
	for(int g=0;g!=i;g++){
		if(b.MochilaSolucion[g]==1){
			std::cout<<a.Item[g].Heramienta<< " ";
			pes=a.Item[g].Ganancia+pes;
		}
	}
			std::cout<<std::endl;
	std::cout<<"Ganancia optima"<<pes<<std::endl;
}