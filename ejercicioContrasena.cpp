#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    string savedPassword = "Valeria1234";
    string password;
    int i = 1;

    while (i<=3) {
    cout << "Ingrese la contraseña" << endl;
    cin >> password;

        if (password == savedPassword){
            cout << "Es correcto";
            break;

        } else {
            cout << "Contraseña incorrecta" << endl;
            i++;
        }

        if (i==4){
            cout << "Haz llegado a tu limite de intentos";
        }
    }
}