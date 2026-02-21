#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    int suma, resta, multiplicacion;
    cout <<"Ingrese un numero entero: ";
    cin >> num1;
    cout <<"Ingrese otro numero entero: ";
    cin >> num2;
    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;
    cout <<"La Suma de ambos numeros es: " << suma << endl;
    cout <<"La resta de ambos numeros es: " << resta << endl;
    cout <<"La multiplicacion de ambos numeros es: " << multiplicacion << endl;
    return 0;
}