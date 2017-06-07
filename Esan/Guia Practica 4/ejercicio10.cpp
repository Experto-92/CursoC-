#include<iostream>

using namespace std;

int main(){
	
	double base, com, total;
	
	
	while(base>=0){
		cin>>base;
		com = 0.1*base;
		total = com+base;
		cout<<com<<endl;
		cout<<total<<endl;
	}
	
	
	return 0;
}
