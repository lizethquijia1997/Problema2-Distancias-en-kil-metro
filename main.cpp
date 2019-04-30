#include <iostream>
using namespace std;
int main() {

	int km1=70;
	int km2=150;
	int kmD, kmT;
  
  if ( km1>0 && km2>0 ){

	kmD=(km2-km1)/2;
	cout<<"la distancia que sepera a estos 2 amigos es de: "<<kmD<<" por cada uno"<<endl;
	
	cout<<"si Juan va en el Km 70 y le faltan "<<kmD<<" para encontrase con su amigo"<<endl;
	cout<<"y su otro amigo va en el kilometro  150 y le faltan "<<kmD<<" para encontrase con Juan"<<endl;
	
	kmT=km1+kmD;
	cout<<"entonces los dos amigos se toparian en el Km: "<<kmT<<endl;
	
	
	cout<<"la distancia en la que se encontraran estos amigos es: "<<kmT<<endl;
	return 0;
}
}
