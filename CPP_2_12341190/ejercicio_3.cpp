
#include <iostream>
#include <stdlib.h>
#include <locale>
using namespace std; 

int main() {
    srand(time(NULL));
    setlocale(LC_ALL, "spanish"); 

    char eleccion = 's';
    int respuesta=0;
    int numeroAleatorio = rand() % 1000 + 1;

    while (eleccion == 's' || eleccion == 'S') {
        cout << "Tengo un número entre 1 y 1000. \nPuedes adivinar mi número?\nPorfavor escribe tu primera respuesta: ";
        cin >> respuesta;

        while (respuesta < 1 || respuesta > 1000) {
            cout << "Este numero esta fuera del rango. \nIntenta denuevo: ";
            cin >> respuesta;
        }

        while (respuesta != numeroAleatorio) {
            if (respuesta < numeroAleatorio) {
                cout << "Demasiado bajo. Intenta de nuevo: ";
                cin >> respuesta;
            }
            else if (respuesta > numeroAleatorio) {
                cout << "Demasiado alto. Intenta de nuevo: ";
                cin >> respuesta;
            }
        }
        cout << "Excelente! Adivinaste el número! \nTe gustaría jugar de nuevo (s/n)?";
        cin >> eleccion;
        cout << endl; 
    }

    
    
       
       

        

       
    
}

