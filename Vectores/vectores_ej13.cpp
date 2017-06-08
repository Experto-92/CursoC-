#include<iostream>

using namespace std;

int *leerVector(int n){
	int *V;
	V = new int[n];
	for(int i=0;i<n;i++){
		cout<<"Ingrese el dato en la posicion "<<i<<": ";cin>>V[i];
	}
	
	return V;
}

void invertirVector(int *V,int n){
	
	
	for(int i=n-1;i>=0;i--){
		cout<<V[i]<<" ";
	}
}


int main(){
	int n;
	cout<<"Ingrese el tamaño del vector: ";cin>>n;
		
	int *A;
	A =new int[n];
	
	A=leerVector(n);
	invertirVector(A, n);
	
	return 0;
}
