#include <iostream>
using namespace std;

int main() {
    int cantidad;
    double precio, total;
    cout <<"Ingrese el precio de su producto: ";
    cin >> precio;
    cout <<"Ingrese la cantidad de su producto: ";
    cin >> cantidad;
    total = precio * cantidad;
    cout <<"Su total a pagar es: " << total << endl;
    return 0;
}