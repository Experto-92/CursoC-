#include<iostream>

using namespace std;

float promedio(float A[],float n){
	float suma=0;
	for(int i=0;i<n;i++){
		cout<<A[i]<<" ";
		suma += A[i];
	}
	
	return suma/n;
}




int main(){
	float prom, n=5;
	float A[]={1,2,3,4,5};
	prom = promedio(A,n);
	cout<<endl<<prom;
	
	return 0;
}
