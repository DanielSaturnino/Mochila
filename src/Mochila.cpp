/*
Nombres:Rodrigo Mayett Guzman
		Daniel Manzano Saturnino

*/
#include "Mochila.h"
/*
este metodo arma la matriz para armar la 
tabla que el profe quiere mostrar de acuerdo 
al peso y la ganancia recibe de parametros 
los indices i y j
*/
void  Mochila::ArmaMatriz(int i,int j){
	int x=0,f=j-2,ganam;
	for(int k=0;k<=j;k++){
			Mochila[0][k+1]=x;
			x++;
	}
	for(int k=0;k<=i;k++){
			Mochila[k][j+1]=0;
	}
	x=0;
	for(int k=0;k<=i;k++){
			Mochila[k][0]=x;
			x++;
	}
	for(int l=j-1;l>=1;l--){
		for(int q=1;q<=i;q++){
			if(Peso[f]<=Mochila[q][0]){
				Mochila[q][l]=Ganancia[f];
			}	
			if(Mochila[q][0]-Peso[f]>=Peso[f+1]&&Mochila[q][0]-Peso[f]!=0){
				Mochila[q][l]=(Mochila[Mochila[q][0]-Peso[f]][l+1])+Mochila[q][l];
			}
			if(Mochila[q][z]<Mochila[q][z+1]){
				Mochila[q][z]=Mochila[q][z+1];
				}
		}
		f--;
	}
}
//Aqui va llenar la mochila con la ganancia y con el mayor numero de items
void Mochila::Solucion(int i,int j){
	int a=1,x=0;
	while(i){
		if(Mochila[i][a]!=Mochila[i][a+1]){
			MochilaSolucion[x]=1;
			i=i-Peso[x];
			a++;
			x++;
		}else{
			a++;
			x++;
		}
	}
}

void Mochila::Mostrar(int i,int j){
	for(int k=0;k<=i;k++){
		for(int q=0;q<=j;q++){
			std::cout<<Mochila[k][q]<<"  ";
		}
		std::cout<<""<<std::endl;
	}
}