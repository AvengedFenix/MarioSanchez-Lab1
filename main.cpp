#include <iostream>

using namespace std;

int main(){
	int num1 = 1;
	int num2 = 1;
	int num3 = 1;
	cout<< "Ingrese el numero de veces que quiera que se repita el ciclo";
	int cicl;
	cin>> cicl; 
	for(int i = 0; i <= cicl; i++){
		cout<< num1 << ", " << num2 << ", " << num3 << ", ";
		num1 = num1 + num2;
		num2 = num2 + num3;
		num3 = num3 + num1;
	}
	cout << endl;
}
