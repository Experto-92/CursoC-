#include<iostream>

using namespace std;






int main(){
	int n, i;
	cout<<"Ingrese el tamaño de los vectores: ";cin>>n;
	
	int A[n];
	int B[n];
	int C[n];
	
	for (i=0;i<n;i++){
		cout<<"Ingrese el dato en la posicion "<<i<<" del vector A: ";cin>>A[i];
		cout<<"Ingrese el dato en la posicion "<<i<<" del vector B: ";cin>>B[i];
	}
	
	for(i=0;i<n;i++){
		//cout<<i<<" "<<A[i]<<" "<<B[i]<<" ";
		C[i]=A[i]+B[i];
		cout<<C[i]<<" ";
	}
	
	return 0;
}
