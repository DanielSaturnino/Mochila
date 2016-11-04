#include "Archivos.h"
std::fstream fichero;

int  Archivos::Leer(){
  char linea[128];
	int i=6,j=0,Mochola;
    fichero.open("Mochila.txt",std::ios::in);
        while (! fichero.eof()){   
        fichero.getline(linea,sizeof(linea));     
        	if(i==6){
        		fichero >> Mochola;
        		i=0;
        	}if(i==0){
       			fichero >> Item[j].Peso;
       		}if(i==1){
       			fichero >> Item[j].Ganancia;
       		}if(i==2){
       			fichero>>Item[j].Heramienta;
       		}
       		i++;
       		if(i==3){
       			i=0;
       			j++;
       		}  
          std::cout<<Mochola<<std::endl;  
        }
    NumItem=j+1;  
    fichero.close();
    return Mochola;
}
