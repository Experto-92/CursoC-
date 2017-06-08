#include<iostream>

using namespace std;

int *vector(int n){
	int *A;
	A = new int[n];
	for(int i=0;i<n;i++){
		cout<<"Ingrese el dato en la posicion "<<i<<": ";cin>>A[i];
	}
	
	return A;
}


int main(){
	int n;
	cout<<"Ingrese el tamaño del vector: ";cin>>n;
	int *A;
	A = new int[n];
	A = vector(n);
	for(int i=0;i<n;i++){
		cout<<A[i]<<" ";
	}
	return 0;
}
