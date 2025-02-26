#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int num1;
	int num2;
	int num3;

	cout << "Digite tres numeros" << endl;
	cin >> num1 >> num2 >> num3;

	if(num1+num2==num3) {
		cout << num3 << " es la suma de " << num1 << " y " << num2;
	}
    else if(num1+num3==num2) {
		    cout << num2 << " es la suma de " << num1 << " y " << num3;
	}
	else if(num2+num3==num1) {
		cout << num3 << " es la suma de " << num1 << " y " << num2;
	}
	else 
	    cout << "Ningun numero es la suma de los otros dos";
	
}
