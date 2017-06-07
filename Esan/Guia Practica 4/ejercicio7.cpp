#include<iostream>

using namespace std;

int main(){
	int i=1, suma=0;
	do{
		if (i%2!=0){
		suma = suma + i;
		cout<<i<<"  "<<suma<<endl;	
		}
		i++;
	}while(i<=100);
	
	cout<<suma;
	
	return 0;
}
