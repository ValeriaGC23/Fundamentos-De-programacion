#include <iostream>
#include <string>
#include <cmath>
#include <random>

using namespace std;

int main(){
/*
    // Imprimir num del 1 al 10
    for (int i=1; i<=10; i++){
        cout << i << endl;
    }

*/
    // Generar 10 numeros enteros aleatorios entre -100 y 100


    random_device rd; //Genera un seed desde el computador
    mt19937 mt(rd()); //Crear el generador de num aleatorios
    uniform_int_distribution <int> distrib (10,50); //Crea una distribución con el rango de los numeros
    int randomNumber = distrib(mt);
    
    cout << randomNumber;

    random_device rd; //Genera un seed desde el computador
        mt19937 mt(rd()); //Crear el generador de num aleatorios
        uniform_int_distribution <int> distrib (10,50); //Crea una distribución con el rango de los numeros

    for (int i = 1; i <= 10; i++){
        
        int randomNumber = distrib(mt);
        
        cout << randomNumber;
        cout << i << endl;
    
    }
}