#include<iostream>
#include<conio.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *ente;
};

void agrepila(Nodo *&,int);

int main(){
	Nodo *pila=NULL;
	int z,y;
	
	cout<<"Digite numero: ";
	cin>>z;
	agrepila(pila,z);
	
	cout<<"Digite otro numero: ";
	cin>>y;
	agrepila(pila,y);
	
	
	getch();
	return 0;
}

void agrepila(Nodo *&pila,int x){
	Nodo *nue_nodo = new Nodo();
	nue_nodo->dato = x;
	nue_nodo->ente = pila;
	pila = nue_nodo;
	
	cout<<"\nElemento "<<x<<" agregado a pila correctamente "<<endl;
	
}
