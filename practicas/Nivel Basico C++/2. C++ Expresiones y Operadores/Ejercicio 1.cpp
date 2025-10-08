// 1. Escribe la siguiente expresion como expresion en C++: a) resultado = (a/b) + 1

#include <iostream>;

using namespace std;

int main(){
	float a, b, resultado = 0;
	
	cout<<"Digite el valor de a: "; cin>>a;
	cout<<"Digite el valor de b: "; cin>>b;
	
	resultado = (a/b) + 1;
	
	cout<<"\nValor del resultado es: "<<resultado<<endl;
	
	return 0;
}
