/*
Nombres:Rodrigo Mayett Guzman
    Daniel Manzano Saturnino
    */
#include "Archivos.h"
std::fstream archivo;
std::string frase;

int  Archivos::Leer(){
  char linea[128];
	int i=6,j=0,Mochola;
    archivo.open("Mochila.txt",std::ios::in);
        while (! archivo.eof()){
        getline(archivo,frase);       
        	if(i==6){
        		archivo >> Mochola;
        		i=0;
        	}if(i==0){
       			archivo >> Item[j].Peso;
       		}if(i==1){
       			archivo >> Item[j].Ganancia;
       		}if(i==2){
       			archivo>>Item[j].Heramienta;
       		}
       		i++;
       		if(i==3){
       			i=0;
       			j++;
       		}  
          std::cout<<frase<<std::endl;  
        }
    NumItem=j+1;  
    archivo.close();
    return Mochola;
}
