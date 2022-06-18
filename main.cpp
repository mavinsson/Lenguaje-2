#include <iostream>
#include "startShip.h"
#include "snake.h"
#include <string>

using namespace std;

string juegos [2][2] = {
    {"1", "starShip()"},
    {"2", "snake()"},
};

int main(int argc, char const *argv[])
{
    int opcion = 0;

    while (true) {
        
        system ("cls");

        cout << endl;
        cout << "*************" << endl;
        cout << "*****menu****" << endl;
        cout << "*************" << endl;
        cout << endl;
        cout << " ¡¡¡¡¡ELIGE EL JUEGO!!!!! " << endl;
        cout << endl;
        cout << "1 - starShip" << endl;
        cout << "2 - snake" << endl;
        cout << "0 - Salir" << endl;
        cout << endl;
        cout << "Ingrese una opcion, Y INICIA EL JUEGO: ";
        cin >> opcion;
        
        switch (opcion)
        {
        case 1:
            starShip();
            break;
        
        case 2:
            snake();
            break;
         
        default:
        break;
        }

        system ("pause");
        cout << endl;
        if (opcion == 0)
        {
            break;
        }
    }

    return 0;
}

