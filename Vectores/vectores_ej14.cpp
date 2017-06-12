#include<iostream>

using namespace std;


int *P(int *V,int t,int n){
	int t_P =1;
	
	for(int i=0;i<t;i++){
		if (V[i]==n){
			t_P++;
		}
	}
	//cout<<t_P<<endl;
	int *P;
	P = new int [t_P];
	P[0]=t_P;
	int j = 1;	
	for(int i=0;i<t;i++){
		if (V[i]==n){
			P[j]=i;
			j++;
		}
	}
	/*for(int i=0;i<t_P;i++){
		cout<<P[i]<<" ";
	}
	cout<<endl;*/
	return P;	
}



int main(){
	int t_A;
	cout<<"Ingrese el tamaño del vector: ";cin>>t_A;
	
	int *A;
	A=new int[t_A];
	for (int i=0;i<t_A;i++){
		cout<<"Ingrese el dato en la posicion "<<i<<": ";cin>>A[i];
	}
	
	int n;
	cout<<"Ingrese un número: ";cin>>n;
	
	int *B;
	B=P(A,t_A,n);
	if(B[0]>1){
			for(int i=1;i<B[0];i++){
			cout<<B[i]<<" ";
		}
	}else{cout<<"El numero no esta en el arreglo";}
	return 0;
}
