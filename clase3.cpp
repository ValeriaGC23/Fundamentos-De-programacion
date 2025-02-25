#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {

    //CUENTA LOS NUMEROS DEL 1 HASTA EL NUM DADO EN INPUT
    /*
    int i=1;
    int num=0;
    cin >> num;

    while (i<=num)
    {
        cout << i << endl;
        i++;
    }
    */

    //IMPRIME LOS MULTIPLOS HASTA EL 100 Y DIVISORES DE UN NUMERO

    int i=1;
    int num;
    cout << "Digita un numero al que le quieras encontrar sus divisores y multiplos: ";
    cin >> num;

    while (i <= 100){
        if (num % i == 0){
            cout << "El numero: " << i << " es divisor de " << num << endl;
        }
        i++;
    }

    i=1;

    while (i <= 100){
        if (i % num == 0){
            cout << "El numero: " << i << " es multiplo de " << num << endl;
        }
        i++;
    }

}