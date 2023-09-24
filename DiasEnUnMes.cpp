#include <iostream>
using namespace std;

int main()
{
    // Karla Estefany Hernandez Pocasangre

    // Declaracion de Variables
    int mes;

    // Ingreso de Datos
    cout << "Ingrese un numero del 1 al 12 segun corresponda el mes: ";
    cin >> mes;

    // Salida de Datos
    switch (mes)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "\nEl mes seleccionado tiene 31 dias" << endl;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "\nEl mes seleccionado tiene 30 dias" << endl;
        break;
    case 2:
        cout << "\nEl mes seleccionado tiene 28 o 29 dias" << endl;
        break;
    default:
        cout << "\nIngrese un numero valido" << endl;
        break;
    }
    return 0;
}