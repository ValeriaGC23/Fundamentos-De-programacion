#include <iostream>

using namespace std;

int main(){

    // DEFINIR SI ES MAYOR O MENOR DE EDAD

    int edad;
    cout << "Cual es tu edad \n";
    cin >> edad;
    cout << "Tu edad es: " << edad << endl;

    if(edad >= 18){
        cout << "Eres mayor de edad" << endl;
    }
    else{
        cout << "Eres menor de edad" << endl;
    }

    //DEFINIR QUE NUMERO ES MAYOR ENTRE TRES

    int num1, num2, num3;
    cout << "Digite tres numeros" << endl;
    cin >> num1 >> num2 >> num3;

    if (num1 > num2){
        if (num1>num3){
            cout << "El numero mayor es " << num1;
        }
    }
    else if (num2 > num1){
        if (num2 > num3){
            cout << "El numero mayor es " << num2;
        }
    }
    else{
        cout << "El numero mayor es " << num3;
    }
}